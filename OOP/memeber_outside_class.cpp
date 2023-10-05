#include <iostream>
using namespace std;
class A
{
private:
    int a, b, c;

public:
    void add();
};
void A::add()
{
    cout << "Enter two values:";
    cin >> a >> b;
    c = a + b;
    cout << "sum: " << c;
};
int main()
{
    A p;
    p.add();
    return 0;
}