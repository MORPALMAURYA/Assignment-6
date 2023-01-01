// 5.	Write a program to calculate sum of cubes of first N natural numbers


#include<stdio.h>
int main()
{
    int i=1,n,s=0;
    printf("enter a number");
    scanf("%d",&n);
    while(i<=n)
    {


        s=s+i*i*i;
        i++;
    }

    printf("sum is %d",s);

    return 0;

}