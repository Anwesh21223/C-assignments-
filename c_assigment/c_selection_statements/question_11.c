#include<stdio.h>
int main()
{
    int a,b,c;printf("Enter any two digit number:");scanf("%d",&a);c=a/10;b=a%10;
    if(a>=11 && a<=19){switch(a){case 11:printf("\nEleven");break;case 12:printf("\n Twevelv");break;case 13:printf("\nThirteen");break;
    case 14:printf("\nFourteen");break;case 15:printf("\nFifteen");break;case 16:printf("\nSixteen");break;case 17:printf("\nseventeen");break;
case 18:printf("\nEighteen");break;case 19:printf("\n Nineteen");break;default: break;return 0;}
}else{switch(c){case 2:printf("\n Twenty");break;case 3:printf("\n Thirty");break;case 4:printf("\n forty");break;case 5:printf("\nfifty");break;case 6:printf("sixty");break;case 7:printf("\nSeventy");break;case 8:printf("\nEighty");break;case 9:printf("\nninety");break;default:break;}
switch(b){case 1:printf("-one");break; case 2:printf("-two");break; case 3:printf("-three");break;case 4:printf("-four");break;case 5:printf("-five");break;case 6:printf("-six");break;case 7:printf("-seven");break;case 8:printf("eight");break;case 9:printf("-nine");break;default:break;}}
return 0;
}