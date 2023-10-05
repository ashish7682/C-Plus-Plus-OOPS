#include <iostream>
using namespace std;
class A
{
private:
    int a, b, c;

public:
    void input()
    {
        cout << "Enter the first number:";
        cin >> a;
        cout << "Enter the second number:";
        cin >> b;
    }
    void mul()
    {
        c = a * b;
    }
    void output()
    {
        cout << "product: " << c;
    }
};
int main()
{
    A obj;
    obj.input();
    obj.mul();
    obj.output();
    return 0;
}
