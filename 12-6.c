#include<stdio.h>
void avanish(int);
int main()
{
    int a;
    printf("enter the number=");
    scanf("%d",&a);
    avanish(a);
    return 0;
}
void avanish(int n)
{
    if (n>=1)
    {
        avanish(n-1);
        printf(" %d",n*n);
    }
    
}