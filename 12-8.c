#include<stdio.h>
void sqr(int);
int main()
{
    int a=10;
    sqr(10);
    return 0;
}
void sqr(int n)
{
    if(n==0)
    {
        return 0;
    }
    sqr(n-1);
    printf("%d ",n*n);
}