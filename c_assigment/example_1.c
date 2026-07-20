// Write a program that prompts a user to input a number n and print the square of numbers till n.
#include<stdio.h>
int main()
{
    int n,i=0;
    printf("Enter any number:");
    scanf("%d",&n);
    while(i<=n){
        printf("\n%d \t %d",i,i*i);
        i++;
    }
    return 0;
}