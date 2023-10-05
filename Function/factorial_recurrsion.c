#include<stdio.h>
int fact(int n);
int main()
{
    int n,factorial=1;
    printf("enter a positive number:");
    scanf("%d",&n);
    factorial=fact(n);
    printf("factorail:%d",factorial);
    return 0;
}
int fact(int n)
{
    if(n!=0)
    {
      return n*fact(n-1);
    }else{
        return 1;
    }
}