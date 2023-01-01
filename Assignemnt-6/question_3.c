// 3.	Write a program to calculate sum of first N odd natural numbers


#include<stdio.h>
int main()
{
    int i=1,n,sum=0;
    printf("enter a number");
    scanf("%d",&n);
    while(i<=n)
    {


        sum=sum+2*i-1;
        i++;
    }

    printf("sum of natural number %d",sum);

    return 0;

}
