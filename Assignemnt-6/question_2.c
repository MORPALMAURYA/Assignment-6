//2.	Write a program to calculate sum of first N even natural numbers



#include<stdio.h>
int main()
{
    int i,sum=0,n;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++) 

        if(i%2==0)
     {
        sum=sum+i;
    }
    printf("sum of natural number %d",sum);

    return 0;

}