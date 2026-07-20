//Write a program that prompts the user to input an integer n and run a while rum to print the sum of n integers.
#include<stdio.h>
int main()
{
    int n,sum=0,b;
    printf("Enter an integer:");
    scanf("%d",&n);
    while(n!=0)
    {
        printf(" \nEnter an integer to sum:");
        scanf("%d",&b);
        sum=sum+b;
        n--;
    }
    printf("\n The sum is %d",sum);
    return 0;
}