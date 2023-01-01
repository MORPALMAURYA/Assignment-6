// 6.	Write a program to calculate factorial of a number

#include<stdio.h>
int main()
{
    int i ,n;
    int fact=1;
     printf("enter a number :\n");
     scanf("%d",&n);

     for(i=1;i<=n;i++)
     {
        fact=fact*i;
        {
            printf(" Factorial of %d is %d,\n",i,fact);
        }
     }

     return 0;
}