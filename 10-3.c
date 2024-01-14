//Write a function to check whether a given number is even or odd. Return 1 if the 
//number is even, otherwise return 0. (TSRS)
#include<stdio.h>
int num(int);
int main()
{
    int k,x;
    printf("enter the number");
    scanf("%d",&x);
    k=num(x);
    printf("%d",k);
    return 0;
}
int num(int n)
{
    if(n%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}