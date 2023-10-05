#include <iostream>
using namespace std;
class A
{
private:
    int a, b, c;

public:
    void input()
    {
        cout << "Enter the first element:";
        cin >> a;
        cout << "Enter the second element:";
        cin >> b;
    }
    void sum()
    {
        c = a + b;
    }
    void output()
    {
        cout << "Sum: " << c;
    }
};
int main()
{
    A obj;
    obj.input();
    obj.sum();
    obj.output();
    return 0;
}