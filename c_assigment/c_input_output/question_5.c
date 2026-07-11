
//Write a program that asks the user to enter the numbers from I to 16 (in any order) and then
//displays the numbers in a 4 by 4 arrangement, followed by the sums of the rows, columns,
//and dia w
//s>onals:
//Enter the numbers from 1 to 16 in any order:
//16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1
//Row s u m s : 34 34 34 34
//C o lu m n s u m s : 34 34 34 34
//D i a g o n a l s u m s : 34 34


//solution
#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    int i;
    int j;
    int k;
    int l;
    int m;
    int o;
    int p;
    int q;
    int r;
    printf(" Enter numbers from one to sixteen in any order:");
    printf("\n)");
    printf(" Enter first number");
    scanf("%d",&a);
    printf("\n Enter second number: ");
    scanf("%d",&b);
    printf("\n");
    printf(" Enter number 3:");
    scanf("%d",&c);
    printf("\n");
    printf(" Enter number 4:");
    scanf("%d",&d);
    printf("\n");
    printf(" Enter number 5: ");
    scanf("%d",&e);
    printf("\n");
    printf("Enter number 6");
    scanf("%d",&f);
    printf("\n");
    printf(" ENter number 7:");
    scanf("%d",&g);
    printf("\n");
    printf("ENter number 8:");
    scanf("%d",&i);
    printf("\n");
    printf(" Enter number 9");
    scanf("%d",&j);
    printf("\n");
    printf(" ENter number 10:");
    scanf("%d",&k);
    printf("\n");
    printf(" Enter number 11");
    scanf("%d",&l);
    printf("\n");
    printf(" ENter number 12");
    scanf("%d",&m);
    printf("\n");
    printf(" ENter number 13");
    scanf("%d",&o);
    printf("\n");
    printf("Enter number 14");
    scanf("%d",&p);
    printf("\n");
    printf("Enter number 15 ");
    scanf("%d",&q);
    printf("\n");
    printf(" Enter number 16");
    scanf("%d",&r);

    // We are finish getting the input from the user now calculating for the output 

    int row_sum;
    printf("\n");
    printf(" The row sum is %d \t %d \t %d \t %d ", a+b+c+d,e+f+g+i,j+k+l+m,o+p+q+r);
    printf("\n");
    printf(" The colum sum is %d\t%d\t%d\t%d",a+e+j+o,b+f+k+p,c+g+l+q,d+i+m+r);
    printf("\n");
    printf(" The diagonal sums are:%d\t%d",a+f+l+r,d+g+k+o);
    return 0;
}
    
    





