#include<stdio.h>
void odd(int);
int main()
{
    int n=15;
    odd(n);
    return 0;
}
void odd(int n)
{
    if (n==0)
     return ;
    odd(n-1);
    if(n%2==0)
    {
        printf(" %d",n);
    }
}