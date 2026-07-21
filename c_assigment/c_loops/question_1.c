#include<stdio.h>
int main()
{
    float a=0,b=0,c=2;
    while(c<5)
    {
        printf("Enter a non negetive integer(Enter zero to exit):");
        scanf("%f",&a);
        if(a==0){
            break;
        }
        if(a>b){
            b=a;
        }

    }
    printf("\n The largest number entered was %f",b);
    return 0;
}