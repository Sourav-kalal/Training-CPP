#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char testString[] = "hello";
    int temp;

    for (int i = 0; i < strlen(testString); i++)
    {
        for (int j = i; j < strlen(testString) - i - 1; j++)
        {
            if (testString[j] > testString[j + 1])
            {
                temp = testString[j];
                testString[j] = testString[j + 1];
                testString[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < strlen(testString); i++)
    {
        cout << testString[i];
    }

    return 0;
}