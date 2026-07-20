//Write a program that prompts the user to input a positive integer and prints the number of digits using the do iteration statement.
#include<stdio.h>
int main()
{
    int n,digit;
    printf(" Enter an integer ");
    scanf("%d",&n);
    do{
        n=n/10;
        digit++;
    }while(n!=0);
    printf("\n%d ",digit);
    return 0;
}