//W rite a program that asks the user to enter a wind speed (in knots), then displays the corre­
//sponding description.
#include<stdio.h>
int main()
{
   
         int a;
        printf(" Enter wind speed in knots");
        scanf("%d",&a);
        printf("\n");
        if(a>=1 && a<=3){printf("Light air ");}
        else if(a>3 && a<28){printf("breeze");}
        else if(a>=27 && a<=47){printf("gale");}
        else if (a>=48 && a<=63){printf("storm");}
        else if(a>63){printf("hurricane");}
        else{printf("clam");}

    return 0;
}