#include <iostream>
using namespace std;
void add(int a, int b); // function declaration
int main()
{
    int sum, a, b;
    cout << "Enter the  value of a:";
    cin >> a;
    cout << "Enter the value of b:";
    cin >> b;
    add(a, b); // function call
    return 0;
}
void add(int a, int b)
{
    cout << "sum:" << (a + b);
}