#include<stdio.h>
int main()
{
    int a,b,i=1;int l=0;
    printf(" Enter an fraction: ");
    scanf("%d/%d",&a,&b);
    for(i;i<12;i++){
        if(a%i==0 && b%i==0){
            l=i;
        }
        
    }a=a/l;b=b/l;
    printf("\n In lowest term:%d/%d",a,b);
}