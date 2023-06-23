#include<stdio.h>
int main()
{
//creating variables
    int x,y;
//inputs
    printf("Enter the first number:- ");
    scanf("%d",&x);
    printf("Enter the second number:- ");
    scanf("%d",&y);
//selection
    if(x>y)
        printf("%d is the highest number",x);
    else
        printf("%d is the highest number",y);
}
