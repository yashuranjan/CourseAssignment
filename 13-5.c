//Write a recursive function to calculate sum of digits of a given number
#include<stdio.h>
int main()
{
    int n=1234,m;
    m=sum(n);
    printf("%d ",m);
    return 0;
}
int sum(int n)
{
    int s;
    if (n/10==0)
    {
        return(n);
    }
    s=(n%10)+sum(n/10);
    return s;
}