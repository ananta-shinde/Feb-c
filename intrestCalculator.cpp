// write a program to calculate simple interest

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int p,n;
    float r;
    int si;
    printf("Enter principle amount:");
    scanf("%d",&p);
    printf("Enter no years:");
    scanf("%d",&n);
    printf("Enter rate of intrest:");
    scanf("%f",&r);
    si=(p*r*n)/100;
    printf("SI for your investment is: %d",si);
    return 0;
}
