#include<stdio.h>
int main()
{
    int a,b;
    int i=1,x,y,z;
    printf(" Enter first integer:");
    scanf("%d",&a);
    printf("\n Enter second integer:");
    scanf("%d",&b);
    for(i;i<b;i++){
        if(a%i==0 && b%i==0){
        z=i;
       
        }
    }
    printf("\n The greatest common dividor is %d",z);
    return 0;
}
    

    
    