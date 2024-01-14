//Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>
float area(float);
int main()
{
    float x,y;
    printf("enter the number=");
    scanf("%f",&x);
    y=area(x);
    printf("area of circle is %f",y);
    return 0;

}
float area(float a)
{
    float b;
    b=2*3.14*a*a;
    return b;
}