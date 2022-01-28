#include <iostream>
#include <stdarg.h>
#include <stdio.h>
using namespace std;
double average(int num, ...)
{
    va_list valist;
    double sum = 0.0;
    int i, temp;
    va_start(valist, num); // initialize valist for num number of arguments
    cout << "Argument values ";

    for (i = 0; i < num; i++)
    { // access all the arguments assigned to valist
        // temp = va_arg(valist, int);
        // printf("%d ", temp);
        temp = va_arg(valist, int);
        cout << temp << " ";
        sum += temp;
    }
    cout << endl;
    va_end(valist); // clean memory reserved for valist
    return sum / num;
}
int main()
{
    cout << "Average of 2, 3, 4, 5 = " << average(4, 2, 3, 4, 5) << endl;
    cout << "Average of 5, 10, 15 = " << average(3, 5, 10, 15) << endl;
}