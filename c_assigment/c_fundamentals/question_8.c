// Question: Write a program that calculates the remaining balance on a loan after 
// the first , second and third monthly payments:
// for example is the input:
// ENter amount of loan: 20,000
//ENter internet rate: 6
// Enter montly payment: 386.66
// The output should be as follows: 
//  Balance remaing after first payment is: $19713.34
// Balance reaming after second payment is: $19425.25
// Balance remaing after the third payment is: $19135.71

// Solution 
#include<stdio.h>
int main()
{
    int p;
    int i;
    int x;
    int a;
    int b;
    int c;
    int d;
    int e;
    int c_1;
    printf("\n Enter the amount of loan: ");
    scanf("%d",&p);
    printf(" \n Enter the interest rate :");
    scanf("%d",&i);
    printf(" \n Enter montly payments");
    scanf("%d",&x);    
    // principle with interest to pay after the first month
    p= p-x;
    a = p + (p*((i/100)/12));
    // principle remaing after paying monthly payment after one month 
    b=a-x; // output for remaing amount after 1 month after payment  
    // the second month 
    c= b+ (b*((i/100)/12)); // the principle with interest to pay in month two
    c_1= c-x; // principle to pay after second montly payment 
    //third month 
    d= c_1 + (c_1*((i/100)/12)); // principle with interest without paying the monthly payment

    // printing out our calculations to the user 
    printf(" \n The amount left after 1 month is  %d",a);
    printf(" \n The amount remaing after 2 months is %d",c);
    printf(" \n The amount remaing after 3 months is %d",d);
    return 0;
}


    



