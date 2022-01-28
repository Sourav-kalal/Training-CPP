#include <iostream>
using namespace std;

class item
{
    static int count;
    int number;

public:
    void getData(int a)
    {
        number = a;
        count++;
    }
    void getCount()
    {
        cout << "count : " << count << endl;
    }
};

int item::count;

int main()
{
    item a, b, c;

    a.getCount();
    b.getCount();
    c.getCount();

    a.getData(100);
    a.getCount();

    b.getData(200);
    b.getCount();

    c.getData(300);
    c.getCount();

    cout << "After reading data" << endl;

    a.getCount();
    b.getCount();
    c.getCount();

    return 0;
}