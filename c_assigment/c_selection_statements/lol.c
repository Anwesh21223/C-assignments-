#include<stdio.h>
int main()
{
    int a,b,c;
    int t;
    scanf("%d",&t);
    while(t--){
    printf(" Input an year:");
    scanf("%d",&a);
    if(a>2026){
        c=a-2026;
        b=19+c;

        printf(" \n You are %d years old(Death/Alive) ",b);}
        else if(a<=2026 && a>2007){
            c=2026-a;
            b=19-c;
            printf("\n You are %d year old",b);
        }else if(a==2007){printf(" \n This is the year you were born");}else{printf("\n You arent born yet");}}
        return 0;

    }

