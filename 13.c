//Write a program to print unit digit of a given number
#include<stdio.h>
int main()
{
    int a;
    printf("enter the number=");
    scanf("%d",&a);
    printf("the number is %d and last number is %d",a,a%10);
    return 0;
}