// Write a program that asks the user to enter a two-digit number, then prints the number with
//its digits reversed. A session with thc program should have thc following appearance:
//E n te r a t w o - d i g i t n u m b er:
//T h e r e v e r s a l i s : 82
//28

#include<stdio.h>
int main()
{
    int a ;
    int b;
    int c;
    printf(" \n Enter any two digit numbers:");
    scanf("%d",&a);
    b=a%10; // This is going to be our first output digit
    c=a/10; // Thid is goint to be our last output digit 
    // spitting output to the user 
    printf(" \nThe reverse version of the inpt two digit number is %d ",b*10+c);
    return 0;
}