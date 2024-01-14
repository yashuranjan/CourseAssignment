// Write a program to print a given number without its last digit.
/*#include<stdio.h>
int main()
{
    int a;
    printf("enter the number=");
    scanf("%d",&a);
    printf("the digit are %d and its remove last digit %d",a,a/10);
    return 0;
    
}
*/
#include<stdio.h>
void nnum(int n);
int main()
{
    int n=10;
    nnum(n);
    printf("%d",nnum);
    return 0;
}
void nnum(int n)
{
    if(n==1)
      return 1;
    nnum(n-1);
    printf("  %d",nnum);
}