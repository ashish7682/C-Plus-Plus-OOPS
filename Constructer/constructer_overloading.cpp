#include <iostream>
using namespace std;
class A
{
private:
    int a, b;
    float c;

public:
    A()
    {
        cout << "enter two number:";
        cin >> a >> b;
        cout << a << " " << b << endl;
    }
    A(int x, int y)
    {
        a = x;
        b = y;
        cout << a << " " << b << endl;
    }
    A(int x, float y)
    {
        a = x;
        c = y;
        cout << a << " " << c << endl;
    }
};
int main()
{
    A();
    A(100, 200);
    A(10, 21.3f);
    return 0;
}