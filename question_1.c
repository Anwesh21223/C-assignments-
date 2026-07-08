//     Question: Write a program that computes the volume of a sphere with a 10 meter radius using 
//     the formula v+4/3 pi r*r*r .

// solution 
#include<stdio.h> // include is a directive
#define pi 3.14 //define is a directive or a constant named pi whose value is 3.14
#define radius 10 // radius is a constant so we define is early on so we can avoid the jargon of initialing the constant
int main()    // main is a function, int means the function returns an integer value.(most of the time its 0)
{             // the main function begins 
    int volume_of_sphere;
    volume_of_sphere = (4*pi * radius * radius * radius )/ 4 ;

}