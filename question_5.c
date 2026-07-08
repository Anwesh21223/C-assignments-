// QUestion: Write a program that asks the user to enter a value for x and then displays the value of the 
// following polynomial:  [ ( 3 * x*x*x*x*x) + (2 *x*x*x*x) + ( 5 * x*x*x) - ( x*x ) + 7*x - 6 ]


//Solution 
#include<stdio.h>
int main()
{
    int x;
    int output;
    printf(" Enter the value for x");
    scanf(" %d",&x);
    output = ( 3 * x*x*x*x*x) + (2 *x*x*x*x) + ( 5 * x*x*x) - ( x*x ) + 7*x - 6 ;
    printf(" The output is %d",output);
    return 0;


}