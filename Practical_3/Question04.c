#include<stdio.h>

int main()
{
//creating variables
    float rad,dim,cir,area,pi= 3.14159;

//input
    printf("enter the radius of the circle? ");
    scanf("%f",&rad);

//process and output
    printf("Diameter of the circle is %f \n",2*rad);
    printf("Circumference of the circle is %f \n",2*pi*rad);
    printf("Area of the circle is %f \n",pi*rad*rad);
}
