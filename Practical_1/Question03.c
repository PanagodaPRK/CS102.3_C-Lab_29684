
#include<stdio.h>
int main()
{
//creating variables
    int z;
    float x;
    double c;
    char v[10];
//input
    printf("Enter an intiger- \n");
    scanf("%d",&z);
    printf("Enter a decimal- \n");
    scanf("%f",&x);
    printf("Enter a decimal- \n");
    scanf("%lf",&c);
    printf("Enter a character- \n");
    scanf("%s",&v);
//output
    printf("int display %d \n",z);
    printf("float display %f \n",x);
    printf("double display %lf \n",c);
    printf("char display %s \n",v);

}
