#include <iostream>
using namespace std;
int main()
{
    int ch;
    cout << "Enter user choice";
    cin >> ch;
    switch (ch)
    {
    case 0:
        cout << "sunday";
        break;
    case 1:
        cout << "monday";
        break;
    case 2:
        cout << "tuesday";
        break;
    case 3:
        cout << "wednesday";
        break;
    case 4:
        cout << "thrusday";
        break;
    case 5:
        cout << "friday";
        break;
    case 6:
        cout << "saturday";
        break;
    }
    return 0;
}