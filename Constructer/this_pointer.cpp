#include <iostream>
using namespace std;
class employee
{
    //-----------instance variable-------
public:
    int id;
    string name;
    float salary;
    //----------Declaration of local variable--------
    employee(int id, string name, float salary)
    {
        this->id = id;
        this->name = name;
        this->salary = salary;
    }
    void display()
    {
        cout << id << " " << name << " " << salary;
    }
};
int main()
{
    employee e1 = employee(100, "Ashish", 20000);
    e1.display();
    return 0;
}
