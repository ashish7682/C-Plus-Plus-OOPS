#include<stdio.h>
int sum(int n);  //function declaration
int main()
{
    int n,result=0;
    printf("Enter a positve number:");
    scanf("%d",&n);
    result=sum(n);
    printf("sum=%d",result);
    return 0;
}
int sum(int n)
{
if(n!=0)
{
    return n+sum(n-1);
}else{
    return n;
}
}