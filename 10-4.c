//Write a function to print first N natural numbers (TSRN)
#include<stdio.h>
void num(int n);
int main()
{
    int a;
    printf("enter the number=");
    scanf("%d",&a);
    num(a);
    return 0;
}
void num(int n)
{
    int i=1;
    while (i<=n)
    {
       printf("%d",i);
       i++; 
    }
    printf("\n");
}
