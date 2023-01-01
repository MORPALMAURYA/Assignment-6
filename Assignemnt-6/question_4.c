// 4.	Write a program to calculate sum of squares of first N natural numbers


#include<stdio.h>
int main()
{
    int i=1,n,sum=0;
    printf("enter a number");
    scanf("%d",&n);
    while(i<=n)
    {


        sum=sum+i*i;
        i++;
    }

    printf("sum is %d",sum);

    return 0;

}