//Write a function to print first N odd natural numbers. (TSRN)
#include<stdio.h>
void odd(int);
int main()
{
    int x;
    printf("enter the number=");
    scanf("%d",&x);
    odd(x);
    return 0;
}
void odd(int a)
{
    int i=1;
    while(i<=a)
    {
        if (i%2==1)
        {
            printf("%d ",i);
        }
      i++;
    }
}