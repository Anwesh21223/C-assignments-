
//Write a program that prompts the user to enter a telephone number in the form (xxx) xxx-
//xxxx and then displays the number in the form xxx.xxx.xxx:
//Enter phone number [(xxx) xxx-xxxx]: (404) 817-6900
//You entered 404.817.6900



// Solution
#include<stdio.h>
int main ()
{
    int a;
    int b;
    int c;
    printf("\n Enter a telephone number  ");
    scanf(" (%d)\t%d-%d",&a,&b,&c);
    printf("\n You entered %d.%d.%d",a,b,c);
    printf("\n");
    return 0;
    
}