#include <iostream>
using namespace std;
class A
{
private:
    int a, b;

public:
    void input()
    {
        cout << "Enter values:";
        cin >> a >> b;
    }
    void show()
    {
        cout << a << " " << b;
    }
};
int main()
{
    A obj;
    obj.input();
    obj.show();
    return 0;
}