#include <iostream>
using namespace std;

class item
{
    int number;
    float cost;

public:
    int getData(int a, float b);
    void putData();
};

void item::putData()
{
    cout << "Number :" << number << endl;
    cout << "Cost : " << cost;
}
int item::getData(int a, float b)
{
    number = a;
    cost = b;
}

int main()
{
    item prod1;
    prod1.getData(10, 20.20);
    prod1.putData();
    return 0;
}