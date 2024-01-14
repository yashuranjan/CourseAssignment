//Write a function to calculate the factorial of a number. (TSRS)
#include<stdio.h>
int fact( int );
int main()
{
    int n,s;
    printf("enter the number=");
    scanf("%d",&n);
    s=fact(n);
    printf(" the resut is %d",s);
    return 0;
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