#include<stdio.h>
int printn(int);
int main()
{
    int n,k=5;
    n=printn(k);
    printf(" %d",n);
    return 0;
}
int printn(int k)
{
    int c;
    if (k==0)
    {
        return 0;
    }
    
    
    c=k+printn(k-1);
    return c;
}