#include <iostream>
using namespace std;

class Sample
{
    int a;
    int b;

public:
    void setValue()
    {
        a = 25;
        b = 30;
    }
    friend float mean(Sample s);
};

float mean(Sample s)
{
    return (s.a + s.b) / 2;
}

int main()
{
    Sample s1;
    s1.setValue();
    cout << "Mean : " << mean(s1) << endl;
    return 0;
}