#include <iostream>
using namespace std;
int main()
{
    int i;
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
            continue;
        cout << endl<< i;
    }
    return 0;
}