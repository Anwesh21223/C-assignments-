#include<stdio.h>
int main()
{
    int a,b,c;
    int x,y,z;
    printf(" Enter the first date: ");scanf("%d-%d-%d",&a,&b,&c); printf("\nEnter the second date:");scanf("%d-%d-%d",&x,&y,&z);
    if c>z){printf("\n%d/%d/%d comes before %d/%d/%d",x,y,z,a,b,c);}
    else if(b>y      {printf("\n%d/%d/%d comes before %d/%d/%d",a,b,c,x,y,z);}
    return 0;
}