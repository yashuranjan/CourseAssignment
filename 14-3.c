#include<stdio.h>
int main()
{
    int a[10],i,odd=0,even=0;
    printf("enter the number=");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
        if (a[i]%2==0)
        {
            even=even+a[i];
        }
        else
        {
            odd=odd+a[i];
        }
    }
  printf("the sum of even is %d",even);
  printf("the sum of odd is %d",odd);
  return 0;
}