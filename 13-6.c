//Write a recursive function to calculate HCF of two numbers
#include<stdio.h>
int main()
{
    int a=105,b=91,c;
    c=hcf(a,b);
    printf("%d ",c);
    return 0;
}
int hcf(int a,int b)
{
    if (a==b)
    {
      return a;
    }
    if (a%b==0)
    {
       return a;
    }
    if (b%a)
    {
        return b;
    }
    if (a>b)
    {
       return(hcf(a%b,b));
    }
    else
    {
        return(hcf(a,b%a));
    }
}