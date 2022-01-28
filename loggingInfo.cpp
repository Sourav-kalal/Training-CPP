#include <iostream>
#include <time.h>
#include <fstream>
#include <string.h>

using namespace std;

#define MAX_STRING_LEN_IN_LOG 80
char finallogstring[MAX_STRING_LEN_IN_LOG];

typedef enum
{
    ERROR = 0,
    WARN,
    INFO
} ErrorCode;

void LogToFile(ErrorCode val, char *log_message, char *error_msg);
char *ErroCodeToString(ErrorCode value);

int main()
{
    LogToFile(ERROR, "Not a quadratic equation", "Wrong Input");
    LogToFile(INFO, "It is a quadratic equation", "Right Input");
    return 0;
}

void LogToFile(ErrorCode val, char *log_message, char *error_msg)
{
#define END_OF_STRING '\0'
#define TIME_STRING_LEN 30
#define LOG_TYPE_STRING_LEN 10
#define LOG_BUFFER 21

    time_t my_time = time(NULL);
    ofstream outfile;

    char timestring[TIME_STRING_LEN] = "";
    char logtypestring[LOG_TYPE_STRING_LEN];
    // int totalmsglen=0;

    // clear global variable of any previous data
    memset(finallogstring, 0, MAX_STRING_LEN_IN_LOG);

    // open log file
    outfile.open("file.txt", ios_base::app);

    strcpy(logtypestring, ErroCodeToString(val));

    // create time in string without newline at end.
    strcpy(timestring, ctime(&my_time));
    timestring[strlen(timestring) - 1] = END_OF_STRING;

    // totalmsglen = strlen(logtypestring)+strlen(timestring)+strlen(log_message)+strlen(error_msg)+LOG_BUFFER;
    sprintf(finallogstring, "%s >> %s - %s. :: Reason - %s", logtypestring, timestring, log_message, error_msg);

    if (strlen(finallogstring) > MAX_STRING_LEN_IN_LOG)
    {
        outfile << "LOG ERROR - Log message received is too long. Next Message will be truncated." << endl;
        finallogstring[MAX_STRING_LEN_IN_LOG - 1] = END_OF_STRING;
    }

    // outfile.open("file.txt", ios_base::app);
    outfile << finallogstring << endl;
    outfile.close();
}

char *ErroCodeToString(ErrorCode value)
{
    switch (value)
    {
    case ERROR:
        return "ERR";
    case WARN:
        return "WARN";
    case INFO:
        return "INFO";
    }
}