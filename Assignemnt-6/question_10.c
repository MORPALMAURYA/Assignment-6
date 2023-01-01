// 10.	Write a program to reverse a given number

#include<stdio.h>
int main()
{
    int n,rem=0,rev=0;
    
    printf("enter a number:");
    scanf("%d",&n);

    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;

    }

    printf("reverse number is %d",rev);
    return 0;

}