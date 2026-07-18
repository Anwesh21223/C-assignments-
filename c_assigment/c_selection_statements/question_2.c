
// Caseaded if statements 
#include<stdio.h>
int main()
{
    int a,b;
    printf(" Enter time:");
    scanf("%d:%d",&a,&b);
    if(a<0 && a<=12)
    {
        printf("%d:%d",&a,&b);
    }else if(a>12 && a<=23){
        printf("%d:%d",a-12,b);
    }else{ printf(" Invalid input");
    }
    return 0;

}