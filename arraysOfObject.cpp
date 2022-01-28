#include <iostream>
#define SIZE 5
using namespace std;

class employee
{
    char name[30];
    int age;

public:
    void getData();
    void putData();
};

void employee::getData()
{
    cout << "\nEnter details of Manager " << endl;
    cout << "Enter the name : ";
    cin >> name;
    cout << "Enter age : ";
    cin >> age;
    cout << "\n";
}

void employee::putData()
{
    cout << "Name : " << name << endl;
    cout << "Age : " << age << endl;
}

int main()
{
    employee manager[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        manager[i].getData();
    }
    for (int i = 0; i < SIZE; i++)
    {
        manager[i].putData();
    }
    return 0;
}