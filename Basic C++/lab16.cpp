#include<iostream>
using namespace std;
float area(float);
float circum(float);
int main()
{
    int radius;
    cout<<"\n Enter radius of circle";
    cin>>radius;
    cout<<"\nArea of circle:"<<area(radius);
    cout<<"\n Cicumference of Circle:"<<circum(radius);
}
float area(float radius)
{
    return (3.14*radius*radius);
}
float circum(float radius)
{
    return (2*3.14*radius);
}