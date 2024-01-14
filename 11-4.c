//Write a function to find the next prime number of a given number. (TSRS).
#include<stdio.h>
int main()
{
    int n,i,count=0;
    printf("enter the number=");
    scanf("%d",&n);
    for (i=n;i>=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("%d",n);
    }
   
    return 0;
}





















































