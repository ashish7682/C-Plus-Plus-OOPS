#include <iostream>
using namespace std;
int main()
{
    try
    {
        int age;
        cout << "Enter age:";
        cin >> age;
        if (age >= 18)
        {
            cout << "Access granted-You are old  enough" << endl;
        }
        else
        {
            throw(age);
        }
    }
    catch (int age)
    {
        cout << "Access denied-you must be at least 18 years." << endl;
        cout << "Age is:" << age;
    }
    return 0;
}