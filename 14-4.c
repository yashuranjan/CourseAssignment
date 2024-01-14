//Write a program to find the greatest number stored in an array of size 10. Take array
/*values from the user.
#include<stdio.h>
int main()
{
    
}*/
#include<stdio.h>
int main()
{
    int a[10]={23,5,67,56,34,4,8,9,12,90};
    int i,j,temp;
    printf("enter the number=");
    for ( i = 0; i <= 9; i++)
    {
      for ( j=i+1; j <= 10; j++)
      {
        if (a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        
      }
      
    }
    for ( i = 0; i <=9; i++)
    {
       printf(" %d",a[i]);
    }
    return 0;
}
