//Write a recursive function to print first N natural numbers
#include<stdio.h>
int sum(int);
int main()
{
    int n,m;
    printf("enter the number=");
    scanf("%d",&n);
    m=sum(n);
    printf("%d",m);
    return 0;
}
int sum(int n)
{
    int s;
    if (n==1)
    {
       return 1;
    }
    s=n+sum(n-1);
    return s;
}