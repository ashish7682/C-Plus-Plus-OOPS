#include<iostream>
using namespace std;
class Base
{
    private:
    int a;
    public:
    void input()
    {
        cout<<"Enter the value of Base class:";
        cin>>a;
    }
    void show()
    {
        cout<<"a:"<<a<<endl;
    }
};
class Derive1:public Base
{
    private:
    int b;
    public:
    void input1()
    {
        cout<<"Enter the value of derive1 class:";
        cin>>b;
    }
    void show1()
    {
        cout<<"b:"<<b<<endl;
    }
};
class Derive2:public Base
{
    private:
    int c;
    public:
    void input2()
    {
        cout<<"Enter the value of derive1 class:";
        cin>>c;
    }
    void show2()
    {
        cout<<"b:"<<c<<endl;
    }
};
int main()
{
    Base obj;
    Derive1 obj2;
    Derive2 obj3;
    obj2.input();
    obj2.show();
    obj2.input1();
    obj2.show1();
    return 0;
}