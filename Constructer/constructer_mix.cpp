#include <iostream>
using namespace std;
class A
{
private:
    int a, b;

public:
    A()
    {
        cout << "Enter the values:";
        cin >> a >> b;
        cout << a << " " << b << endl;
    }
    A(int x, int y)
    {
        a = x;
        b = y;

        cout << a << b << endl;
    }
    A(A &obj)
    {
        a = obj.a;
        b = obj.b;
        cout << a << " " << b << endl;
    }
};
int main()
{
    A obj, obj2(10, 20);
    A obj3(obj2);
    return 0;
}