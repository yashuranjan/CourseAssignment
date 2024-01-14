#include<stdio.h>
void even(int);
int main()
{
    int a=10;
    even(10);
    return ;
}
void even(int a)
{
    if(a==0)
    {
        return;
    }
    
    if(a%2==1)
    {
        printf("%d ",a);
    }
    even(a-1);
}