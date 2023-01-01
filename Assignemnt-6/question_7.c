// 7.	Write a program to count digits in a given number


#include<stdio.h>
int main()
{
    int count=0,n;

    printf("enter a number:\n");
    scanf("%d",&n);

    while(n!=0)
    {
        n=n/10;
        count++;
    }

    printf("number of digit is %d\n",count);

    return 0;
}