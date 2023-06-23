#include<stdio.h>

int main()
{
//Creating variables
    int x,y,multi;

//inputs
    printf("enter the first number: ");
    scanf("%d",&x);
    printf("enter the second number: ");
    scanf("%d",&y);

//calculation
    multi = x % y;

//check condition
    if (multi == 0) {
        printf("%d is a multiple of %d",x,y);
    }
    return 0;

}
