//Write a function to calculate simple interest. (TSRS)
#include<stdio.h>
//simlpe interest=pricipal*interest*time.
int si(int,int,int);
int main()
{
    int x,y,z,m;
    printf("enter the principal,interest and time =");
    scanf("%d%d%d",&x,&y,&z);
    m=si(x,y,z);
    printf("simple interest is %d",m);
    return 0;
}


int si(int p,int i,int t)
{
    int c;
    c=p*i*t;
    return c;
}

