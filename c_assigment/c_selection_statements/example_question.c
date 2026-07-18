//Enter date (mm/dd/yy): 7/19/14
//Dated this 19th day of July, 2014.
#include<stdio.h>
int main()
{
    int month,day,year;
    printf(" Enter the date:");
    scanf("%d-%d-%d",&month,&day,&year);
    printf("\n");
    printf(" Dated this on %dth of ",day);
    switch (month)
    {
    case 1: printf("January");
        break;
    case 2: printf(" Feburary");
             break;
    case 3: printf(" March");
            break;
    case 4: printf("April"); break;
    case 5: printf("May");break;
    case 6: printf("june"); break;
    case 7: printf("july");break;
    case 8: printf("August");break;
    case 9: printf("September");break;
    case 10: printf("october");break;
    case 11: printf("november");break;
    case 12: printf("december");break;

    
    default:
    printf(" invalid month, there are only 12 months in a year ");break;
        
    }
    printf(" 20%.2d",year);
    return 0;
}