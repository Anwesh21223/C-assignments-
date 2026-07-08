//Question: Write a program that asks the user to enter a dollars-centsamount, then dispplay the 
// amount with 5% tax added:

// Solution
#include<stdio.h>
int main()
{
    int dollar;
    int output;
    printf(" Enter dollars:");
    scanf("%d",&dollar);
    output= dollar + (dollar) * 0.1;
    printf(" The amount with added tax is %d ", output);
    return 0; 
}
