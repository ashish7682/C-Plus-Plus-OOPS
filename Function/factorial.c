#include<stdio.h>
void fact(int a);
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    fact(a);
    return 0;
}
void fact(int a)
{
    int fact=1;
    for(int i=1;i<=a;i++)
    {
        fact=fact*i;
    }
   printf("Factorial:%d",fact);
  
}