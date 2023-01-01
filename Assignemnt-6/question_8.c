// 8.	Write a program to check whether a given number is a Prime number or not

#include<stdio.h>
int main()
{
    int i,n,f=0;

    printf("enter a number\n");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        f=1;
    }
    if(f==0)
    printf("prime");
    else
    printf("not prime ");
    return 0;
}