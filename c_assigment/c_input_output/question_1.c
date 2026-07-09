// Question: Write a program that accepts data from the user in the form mm/dd/yyyy and then displays in
// the form yyyymmdd
// for example 
              // Enter a date: 02/17/2011: mm/dd/yyyy
              // Output: 20110217: yyyymmdd

// Solution 
#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf(" Enter date in mm/dd/yyyy format \n");
    scanf(" %d/%d/%d",&a,&b,&c);
    printf(" %d%.2d%d",c,a,b);
    return 0;
}