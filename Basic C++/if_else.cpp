#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter two numbers:";
    cin >> a >> b;
    if (a > b)
    {
        cout << "a=" << a;
    }
    else
    {
        cout << "b=" << b;
    }
    return 0;
}