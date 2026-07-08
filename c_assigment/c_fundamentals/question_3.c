// Question: Modify the program of quesion_1.c so that it prompts the user to enter the radius of the sphere .

#include<stdio.h> // include is a directive
#define pi 3.14 //define is a directive or a constant named pi whose value is 3.14
int main()    // main is a function, int means the function returns an integer value.(most of the time its 0)
{             // the main function begins 
    int volume_of_sphere;
    int radius;
    printf("  Enter the radius of the sphere:");\
    scanf("%d",&radius);
    volume_of_sphere = (4*pi * radius * radius * radius )/ 4 ;
    return 0;

}