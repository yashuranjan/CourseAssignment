#include<stdio.h>
void num(int);
int main()
{
    int n=10;
    num(n);
    printf("\n");
    return 0;
}
void num(int n)
{
    int a;
    if(n == 0)
      return 0;
    num(n-1);
    printf(" %d",n);
    
}