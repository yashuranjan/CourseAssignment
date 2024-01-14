//Write a function to calculate the number of arrangements one can make from n items 
//and r selected at a time. (TSRS)
#include<stdio.h>
int arr(int n,int m);
int fact(int n);
int main()
{
   int n,m,s;
   printf("enter the number=");
   scanf("%d%d",&n,&m);
   s=arr(n,m);
   printf("the result is %d",s);
   return 0;
}
int arr(int n,int m)
{
    int c;
    c=fact(n)/fact(m);
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