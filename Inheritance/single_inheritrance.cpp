#include <iostream>
using namespace std;
class base
{
private:
    int a, b;

public:
    void input()
    {
        cout << "Enter the values:";
        cin >> a >> b;
    }
    void show()
    {
        cout << "a:" << a << " "
             << "b:" << b << endl;
    }
};
class derive : public base
{
private:
    int m, n;

public:
    void getdata()
    {
        cout << "Enter the values:";
        cin >> m >> n;
    }
    void display()
    {
        cout << "m:" << m << " "
             << "n:" << n << endl;
    }
};
int main()
{
   /* base ob;
    ob.input();
    ob.show();*/
//-------derive class can access from base class----------// 
    derive ob1;
    ob1.input();
    ob1.show();
    ob1.getdata();
    ob1.display();
    return 0;
}