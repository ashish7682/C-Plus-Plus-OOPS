#include<stdio.h>
void swap(int a,int b);//function declartion
int main()
{
    int a=10;
    int b=20;
    printf("%d %d\n",a,b);
    swap(a,b);
    return 0;
}
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("%d %d",a,b);
}