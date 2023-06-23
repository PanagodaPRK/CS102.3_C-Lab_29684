#include<stdio.h>

int main() {
//creating variables
    int spd,dis,time;
//inputs
    printf("what is the distance car traveled? ");
    scanf("%d",&dis);
    printf("how many time taken to travel? ");
    scanf("%d",&time);
//calculation
        spd=dis/time;
//output
    printf("The average speed of the car is %d meters per second",spd);
}
