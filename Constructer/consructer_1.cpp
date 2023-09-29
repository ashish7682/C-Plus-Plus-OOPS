#include <iostream>
using namespace std;
class A
{
private:
    int a;

public:
    A()
    {
        a = 100;
    }
    void show()
    {
        cout << a;
    }
};
int main()
{
    A obj = A();
    obj.show();
    return 0;
}