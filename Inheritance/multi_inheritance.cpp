#include <iostream>
using namespace std;
class base
{
private:
    int a;

public:
    void input()
    {
        cout << "Enter the values of base class:";
        cin >> a;
    }
    void show()
    {
        cout << "a:" << a << endl;
    }
};
class derive1:public base
{
private:
    int b;

public:
    void input1()
    {
        cout << "Enter the value of derive1 class: ";
        cin >> b;
    }
    void show1()
    {
        cout << "b:" << b << endl;
    }
};
class derive2:public derive1
{
private:
    int c;

public:
    void input2()
    {
        cout << "Enter the value of derive2 class:";
        cin >> c;
    }
    void show2()
    {
        cout << "c:" << c << endl;
    }
};
int main()
{
    /* base ob;
     ob.input();
     ob.show();

     derive1 ob1;
     ob1.input1();
     ob1.show1();

     derive2 ob2;
     ob2.input2();
     ob2.show2();*/
    derive2 ob2;
    ob2.input();
    ob2.show();
    ob2.input1();
    ob2.show1();
    ob2.input2();
    ob2.show2();

    return 0;
}