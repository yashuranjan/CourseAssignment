#include<stdio.h>
void oddv(int);
int main()
{
    int a=10;
    oddv(10);
    return 0;
}
void oddv(int a)
{
    if(a==0)
    {
      return ;
    }
    if (a%2==0)
    {
        printf(" %d",a);
    }
    oddv(a-1);
}