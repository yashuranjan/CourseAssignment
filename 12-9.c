#include<stdio.h>
int main()
{
    int n=5;
    bin(n);
    return 0;
}
void bin(int n)
{
    if (n==1)
    {
        printf("1");
    }
    else
    {
        bin(n/2);
    printf(" %d",n%2);
    }
}