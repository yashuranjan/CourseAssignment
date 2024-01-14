#include<stdio.h>
int main()
{
    int a[10],i,sum=0;;
    printf("enter the 10 number=");
    for ( i = 0; i < 9; i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("total sum is %d",sum);
    return 0;
}