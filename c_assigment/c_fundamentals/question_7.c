// Question: Write a program that ask the user to enter a U.S dollar amount and then shows how to pay that amount
// using the smallest number of $20 , $10, $5, $1 bills
// for example if you under 93 the output should be: $20 bills: 4
                                                   //$10 bills: 1
                                                   //$5 bills:  0
                                                   //$1 bills: 

#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int d;
    printf(" Enter any dollar in the range of [1,999] \t");
    scanf("%d",&a);
    b=(a/10) ;
    c=(a%10) ;
    d=b/2;
    printf("\n 20$ bills: %d",d );
    printf("\n 10$ bills: %d", 1);
    printf(" \n 5$ bills: 0 ");
    printf(" \n 1$ bills: %d",c);
    return 0;
}










