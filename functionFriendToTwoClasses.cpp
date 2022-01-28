#include <iostream>
using namespace std;

class ABC;

class XYZ
{
    int x;

public:
    void getValue(int val)
    {
        x = val;
    }
    friend void max(ABC, XYZ);
};

class ABC
{
    int a;

public:
    void getValue(int val)
    {
        a = val;
    }
    friend void max(ABC m, XYZ n);
};

void max(XYZ m, ABC n)
{
    int maxValue;
    if (m.x >= m.a)
    {
        maxValue = m.a;
    }
    else
    {
        maxValue = n.b;
    }
    cout << "Maximum : " << maxValue << endl;
}

int main()
{
    ABC obj1;
    obj1.getValue(10);

    XYZ obj2;
    obj2.getValue(20);

    max(obj1, obj2);

    return 0;
}