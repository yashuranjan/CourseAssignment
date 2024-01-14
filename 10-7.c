//Write a function to calculate the number of combinations one can make from n items 
//and r selected at a time. (TSRS)
#include<stdio.h>
int comb(int,int);
int fact(int);
int main()
{
    int n,r,s;
    printf("enter the number=");
    scanf("%d%d",&n,&r);
    s=comb(n,r);
    printf("the result is %d",s);
    return 0;
}
int comb(int n,int r)
{
    int c;
    c=fact(n)/(fact(r)*fact(n-r));
    return c;
}

int fact(int n)
{
     int fact=1;
    while (n>=1)
    {
        fact=fact*n;
        n--;
    }
    return fact;
}