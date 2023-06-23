#include<stdio.h>

int main()
{
//creating variables
    float bs,rem1,rem2;
    char city;
//inputs
    printf("Enter the city you are currently working:- ");
    scanf("%c",&city);
    printf("Enter your Basic salary:- ");
    scanf("%f",&bs);

//selection
    if(bs<=25000.0)
        rem1=(110.0/100.0)*bs;
    else if(bs>25000.0&&bs<50000.0)
        rem1=(120.0/100.0)*bs;
    else
        rem1=(150.0/100.0)*bs;
//selection 2
    if (city =='C')
        rem2=rem1+2500.0;
    else
        rem2=rem1;
//output
    printf("The gross remuneration is %.2f ",rem2);
}
