#include<stdio.h>
int main()
{ 
    int a,b;
    printf("Enter a time:");
    scanf("%d:%d",&a,&b);
    if(a>=8 && a<9 && b<60){printf("\n Departure time: 8;am \t Arrival time:10;16am");}
    else if(a>=9 && a<11 ){printf(" \n Departure time: 9:43 \t Arrival time: 11:52am");}
    else if(a>=11 && a<12){printf("\n Departure time: 11:19 \t Arrival time:1:31");}
    else if(a>=12 && a<14){printf("\n Departure time: 12:47 \t Arrival time:3:00pm");}
    else if(a>=14 && a<15){printf("\n Departure time:2;pm \t Arrival time:4:08pm");}
    else if(a>=15 && a<17){printf("\n Departure time:3:45 \t Arrival time:5:55pm");}
    else if(a>=17 && a<19){printf("\n Departure time: 7:00pm \t Arrival time: 9:20pm ");}
    else if(a>=21){printf("\n Departure time: 9:45 and \t Arrival time:");}
    else {printf("\n Departure time: 8:00am \t Arrival time:10;16am");}

    return 0;
}
