//W rite a program that asks the user to enter the amount of taxable income, then displays the
//tax due.
#include<stdio.h>
int main()
{
    int a;
    float b;
    
    printf("\n Enter a taxable amount ");
    scanf("%d",&a);
    printf("\n");  
    printf(" TAX DUE");
    printf("\n");
    if(a<750){b=(a*1)/100;printf("%f is the tax ",b);}
    else if(a>750 && a<2250){b=(a*2)/100;printf("%f is the tax",7.50+b);}
    else if(a>2250 && a<3750){b=(a*3)/100;printf("%f",37.50+b);}
    else if(a>3750 && a<5250){b=(a*4)/100;printf("%f",82.50+b);}
    else if(a>5250 && a<7000){b=(a*5)/100;printf("%f is the tax",142.50+b);}
    else{b=(a*6)/100;printf("%f is the tax",230+b);}
    return 0;

 

}
 