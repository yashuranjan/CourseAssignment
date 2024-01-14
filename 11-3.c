//Write a function to check whether a given number is Prime or not. (TSRS)
#include<stdio.h>
int prime(int);
int main()
{
    int n,m;
    printf("enter the number");
    scanf("%d",&n);
    m=prime(n);
    printf("prime number %d",m);
    return 0;
}
int prime(int n)
{
    int i,count=0;
    for ( i =1; i <=n; i++)
    {
        if (n%i==0)
        {
            count++;
        }
        
    }
    if(count==2)
    {
        return n;
    }
    else
    {
        return 0;
    }

}