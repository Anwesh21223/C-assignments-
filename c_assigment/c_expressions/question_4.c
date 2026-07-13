 //Write a program that reads an integer entered by the user and displays it in octal number 
// Solution 
#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int e;
    int i=0;
    int d;
    int f=100;
    int x=1000;
    int y=10;

    int a_a;
    int b_b;
    int c_c;
    int d_d =1000;
    int e_e =100;
    int g;


    printf(" Enter any number in the decimal number system( 1-10000): ");
    scanf("%d",&a);
    g=a;
    // We will use a while loop as it is more efficient
    while(a!=0) // This loop will count the number of digits in the input 
    { 
        a=a/10;
        b++;  // b is the number of digits in the input 
    }
    printf(" \n The number of digits is %05d ",b);

    
    if(b==3)
       {    
        for(i;i<3;i++)
            {
                d=g%8;
                g=g/8;
                e=e+f*d;
                f=f/10;
            }  while(e!=0)
                    {
                        
                        a_a =e%10;
                        e=e/10;
                        b_b =b_b + a_a * e_e;
                        e_e =e_e /10;
                        
                    }
                    printf(" \n The output is %d ",b_b);
           
        }else if(b==4)
                {    
                for(i;i<4;i++)
            {
                d=g%8;
                g=g/8;
                e=e+x*d;
                x=x/10;
      
                     
                   
                        }                 
                    
                    
                    while(e!=0)
                    {
                        
                        a_a =e%10;
                        e=e/10;
                        b_b =b_b + a_a * d_d;
                        d_d =d_d /10;
                        
                    }
                    printf(" \n The output is %05d ",b_b);
                }
                    return 0;
                }
            