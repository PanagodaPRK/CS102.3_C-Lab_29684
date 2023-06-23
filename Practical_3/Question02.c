#include<stdio.h>
int main()
{
//creating variables
    int x,y,z,max,min;
//inputs
    printf("Enter the first number:- ");
    scanf("%d",&x);
    printf("Enter the second number:- ");
    scanf("%d",&y);
    printf("Enter the third number:- ");
    scanf("%d",&z);
//selection
    max= x;
    min=y;
    if(y>max)
        max=y;
    if(z>max)
        max= z;
    if(min>x)
        min=x;
    if(min>z)
        min=z;

//outputs
    printf("%d is the largest value \n",max);
    printf("%d is the smallest number \n",min);
}
