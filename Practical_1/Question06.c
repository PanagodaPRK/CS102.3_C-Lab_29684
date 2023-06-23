#include<stdio.h>
int main()
{
//creating variables
    int by,age;
    char stn[20];
//inputs
    printf("Enter student name :- ");
    scanf("%s",&stn);
    printf("Enter Birth year :- ");
    scanf("%d",&by);
//calculation
    age=2023-by;
//output
    printf("%s's age is %d",stn,age);

}

