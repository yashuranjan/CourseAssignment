#include<stdio.h>
int main()
{
  int a[10],i;
  printf("enter the number=");
  for ( i = 0; i <=9; i++)
  {
      scanf("%d",&a[i]);
  }
  for ( i = 9; i >=0; i--)
  {
      printf(" %d",a[i]);
  }
return 0;
}