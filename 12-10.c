#include<stdio.h>
void bin(int n);
int main()
{
    int n=50;
    bin(n);
    return 0;
}
void bin(int n)
{
    if (n==1)
    {
        return 0;
    }
   
    bin(n/8);
    printf(" %d",n%8);
}