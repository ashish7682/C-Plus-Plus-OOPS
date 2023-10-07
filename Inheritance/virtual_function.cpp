#include <iostream>
using namespace std;
class A
{
public:
    virtual void display()
    {
        cout << "This is display first phase." << endl;
    }
};
class B : public A
{
public:
    void display()
    {
        cout << "This is display." << endl;
    }
};
int main()
{
    A *a;
    B b;
    a = &b;
    a->display();
    return 0;
}
