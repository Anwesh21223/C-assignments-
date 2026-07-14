#include<stdio.h>
int main()
{
    int a;
    int i=0;
    int b[17];
    int c;
    printf(" Enter a number:");
    scanf("%d",&a);
   // lets save each character of the digits in a array
  for(i;i<13;i++)
  {
    b[i]=a%10;
    a=a/10;
  } // this section of the code should save all the 11 digit digits from the user 
// lets check first 

    // the sum of first sequence
    //Add the second, fourth, sixth,’ eigohth,’ tenth,w and twelfth digcits.  1+8+0+5+7+
    int first_sum=0;
    int second_sum=0;
    first_sum = b[7]+b[5]+b[3]+b[1];
    second_sum= b[8]+b[6]+b[4]+b[2]+b[0];
    int lol;
    lol= (3*first_sum) + second_sum;
    int lol2;
    lol2=lol-1;
    int lol3;
    lol3=lol2 % 10;
    int lol4;
    lol4= 9-lol3;
    printf("\n The check digit:%d",lol4);







    return 0;

}