#include<stdio.h>
int main()
{
int a;printf("Enter a grade:");scanf("%d",&a);
a=a/10;
printf("\n");
switch (a)
{
case 1:case 2: case 3: case 4: case 5: printf("Fail");break;
case 6: printf(" Letter rade: D"); break;
case 7: printf("Letter grade: C");break;
case 8: printf("Letter grade: B");break;
case 9: case 100: printf(" Letter grade: A");break;
default : printf(" Invalid input");break;
    
}  
return 0;
}