//7.Write a program that finds the largest and smallest o ffo u r integers entered by the user:
//Enter four integers: 21 43 10 35
//Largest: 43
//Smallest: 10
#include<stdio.h>
int main()
{
int a,b,c,d;
printf(" Enter any four integers:");
scanf("%d,%d,%d,%d",&a,&b,&c,&d);
if(a>b && a>c && a>d){ printf(" \n %d is the largest",a);}
else if(b>a && b>c && b>d){printf("%d is the greatest",b);}
else if(c>a && c>b && c>d){printf("%d is the greatest ",c);}
else{printf( "%d is the greatest",d);}
// for the smallest 
printf("\n");
if(a<b && a<c && a<d){printf("%d is the smallest ",a);}
else if(b<a && b<c && b<d){printf("%d is the smallest",b);}
else if(c<a && c<b && c<d){printf("%d is the smallest ",c);}
else{printf("%d is the smallest ",d);}
return 0;

}
