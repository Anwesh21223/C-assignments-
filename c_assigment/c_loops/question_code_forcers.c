#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
         {
            int n, a[100],i=0,j,p,c=0,k=0;
            scanf("%d",&n);
            for(i;i<n;i++){
                scanf("%d",&a[i]);
            }i=0;
            for(i;i<n;i++){
                for(j=i+1;j<n;j++){
                    if(a[i]<a[j]){
                        p=a[i];
                        a[i]=a[j];
                         a[j]=p;
                    }
                }

            }i=0; k=1;
            for(i;i<n-2;i++){
                if(a[i]%a[i+1]!=a[i+2]){k=0;break;}
                    
                } if(k==1){printf("%d %d",a[0],a[1]);}else{printf("-1");
            }
        }
}
