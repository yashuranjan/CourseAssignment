#include<stdio.h>
int odd(int);
int main()
{
    int n=5,s;
    s=odd(n);
    printf("%d ",s);
    return 0;
}
int odd(int n)
{
    int s;
    if(n==1)
    {
        return 1;
    }
    s=2*n-1+odd(n-1);
    return s;
}