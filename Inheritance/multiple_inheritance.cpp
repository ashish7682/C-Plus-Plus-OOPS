#include <iostream>
using namespace std;
class base1
{
private:
    int a, b, c;

public:
    void input()
    {
        cout << "Enter value of base1 class:";
        cin >> a >> b;
    }
    void show()
    {
        c = a + b;
        cout << "Sum:" << c;
    }
};
class base2
{
private:
    int a, b, c;

public:
    void input1()
    {
        cout << "Enter value of base2 class:";
        cin >> a >> b;
    }
    void show1()
    {
        c = a - b;
        cout << "Sub:" << c;
    }
};
class derive:public base1 ,public base2
{
private:
    int a, b, c;

public:
    void input2()
    {
        cout << "Enter value of derive class:";
        cin >> a >> b;
    }
    void show2()
    {
        c = a * b;
        cout << "Multiplication:" << c;
    }
};
int main()
{
    derive ob;
    ob.input();
    ob.show();

    ob.input1();
    ob.show1();

    ob.input2();
    ob.show2();
    return 0;


}
