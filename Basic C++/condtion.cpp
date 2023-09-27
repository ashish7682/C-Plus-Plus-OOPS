#include <iostream>
using namespace std;
int main()
{
    cout << ((10 < 5) && (20 < 5)) << endl;
    cout << ((10 >= 5) && (20 <= 50)) << endl;
    cout << ((10 != 5) || (20 <= 50)) << endl;
    return 0;   
}