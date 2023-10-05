#include <iostream>
using namespace std;
class Base
{
protected:
    int a, b;

public:
    void show()
    {
        a = 10;
        b = 20;
        cout << a << ends << b << endl;
    }
};
class Derive : public Base
{
public:
    void disp()
    {
        a = 30;
        b = 40;
        cout << a << ends << b << endl;
    }
};
int main()
{
    Derive obj;
    obj.disp();
    obj.show();
}
