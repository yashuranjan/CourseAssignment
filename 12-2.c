//Write a recursive function to print first N natural numbers in reverse order
#include<stdio.h>
void printn(int n);
int main()
{
    int n;
    printf("enter the number=");
    scanf("%d",&n);
    printn(n);
    return 0;
}
void printn(int n)
{
    if(n<0)
    {
       printn(n-1);
       printf("%d ",n);
    }
}