#include <iostream>
using namespace std;

int main()
{
    int a = 30, b = 20, c = 55;
    if (a > b && a > c)
    {
        cout << "A is greater";
    }
    else if (b > c)
    {
        cout << "B is greater";
    }
    else
    {
        cout << "C is greater";
    }
    return 0;
}