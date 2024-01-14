//Write a function to calculate LCM of two numbers. (TSRS)
#include<stdio.h>
int lcm(int ,int);
int main()
{
    int a,b,m;
    printf("enter the two number+=");
    scanf("%d%d",&a,&b);
    m=lcm(a,b);
    printf("the LCM is %d",m);
    return 0;
}
int lcm(int a,int b)
{
    int l;
    for(l=1;l<=a*b;l++)
    {
      if (l%a==0 && l%b==0)
      {
          return l;
      }
      
    }
}