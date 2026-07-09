// Question: Write a program that formats product information entered by user. 
// Output sample: " look at the link in helful links "

// Solution
#include<stdio.h>
int main()
{
    int a;
    float b;
    int m;// to store month 
    int d;// to store date 
    int y;// to store year 
    printf("\n Enter item number: ");
    scanf("%d",&a);
    printf("\n Enter unit price:");
    scanf("%f",&b);
    printf("\n Enter date: ");
    scanf(" %d/%d/%d",&m,&d,&y);
    printf("\n Item \tunit\tpurchase");
    printf("\n%d\t%f\t%d/%d/%d",a,b,m,d,y);
    return 0;
}