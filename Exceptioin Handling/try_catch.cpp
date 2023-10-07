#include "iostream"
using namespace std;
int main()
{
    cout << "Execution Strating:" << endl;
    int a, b, c;
    cout << "Enter two number:";
    cin >> a >> b;
    try
    {
        if (b == 0)
            throw b;
        c = a / b;
        cout << "Result:" << c;
    }
    catch (int b)
    {
        cout << "can not divide by " << b;
    }
    cout << endl
         << "Execution ended..";
    return 0;
}