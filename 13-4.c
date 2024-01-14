#include<stdio.h>
int main()
{
    int n=3,s;
    s=sqr(3);
    printf("%d ",s);
    return 0;
}
int sqr(int n)
{
    int s;
    if (n==1)
    {
        return 1;
    }
    s=n*n+sqr(n-1);
    return s;
}