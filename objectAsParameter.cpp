#include <iostream>
using namespace std;

class Time
{
    int hour;
    int minute;

public:
    void getTime(int h, int m)
    {
        hour = h;
        minute = m;
    }

    void putTime()
    {
        cout << hour << " hour and " << minute << " minutes " << endl;
    }

    void sumUpTime(Time T1, Time T2);
};

void Time::sumUpTime(Time t1, Time t2)
{
    minute = t1.minute + t2.minute;
    hour = minute / 60;
    minute = minute % 60;
    hour = hour + t1.hour + t2.hour;
    hour %= 24;
}

int main()
{
    Time T1, T2, T3;
    T1.getTime(23, 59);
    T2.getTime(22, 59);
    T3.sumUpTime(T1, T2);
    T3.putTime();
    return 0;
}