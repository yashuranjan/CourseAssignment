#include<stdio.h>
int main()
{
    int a[10];
    int i,temp;
    printf("enter the number=");
    for ( i = 0; i <=9; i++)
    {
        scanf("%d",&a[i]);
        temp=a[i];
    }
    for ( i = 0; i <=9; i++)
    {
        printf(" the store number is %d",temp);
    }
    return 0;
}