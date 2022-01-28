#include <iostream>
using namespace std;

int main()
{
    char testString[] = "hello";
    for (int i = 0; testString[i] != '\0'; i++)
    {
        if (testString[i] >= 97 && testString[i] <= 122)
        {
            testString[i] -= 32;
        }
    }
    for (int i = 0; testString[i] != '\0'; i++)
        cout << testString[i];
    return 0;
}