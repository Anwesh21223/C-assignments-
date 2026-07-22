#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x,y,z;
        
        scanf("%d %d %d %d",&n,&x,&y,&z);
       int hour_without_ai,hour_with_ai,i=0,a=n;
       while(n>0){
        n=n-(x+y);
        i++;
       }hour_without_ai=i;
       a=a-(z*x);
       i=z;
     while(a>0){
        a=a-(x+10*y);
        i++;
     }hour_with_ai=i;
     if(hour_with_ai>hour_without_ai){printf("\n%d ",hour_without_ai);}
     else if(hour_without_ai>hour_with_ai){printf("\n%d ",hour_with_ai);}
     else(printf("\n %d",i));

        
    }
}

// This is a problem from code forcers. Rated-800