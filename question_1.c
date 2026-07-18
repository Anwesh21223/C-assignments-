//Write a program that calculates how many digits a number contains:
//Enter a number: 374
//The number 374 has 3 digits
#include<stdio.h>
int main()
{
    int number;
    printf(" ENter any number ");
    scanf("%d",&number);
    if (number>0 && number<10)
    {
        printf(" \n the number has 1 digit");
    }else if(number>10 && number<100)
             {
                printf(" \n the number of digit is 2");
             }else if(number>100 && number<1000)
             {
                printf(" \n the number of digit is three");
             }else{
                printf("\n invalid digit or digit out of the scope of comprehension of the program");
             }
             
   return 0;           
    
}