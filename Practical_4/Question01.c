#include<stdio.h>
int main()
{
//creating variables
int n,v;
//input
printf("Enter a Number ");
scanf("%d",&n);
//calculation
v=n%2;
//selection
if(v==0)
    printf("%d is a even number",n);
else
    printf("%d is a odd number",n);

}
