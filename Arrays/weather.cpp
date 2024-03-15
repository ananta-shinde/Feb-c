#include<stdio.h>

int main(int argc, char const *argv[])
{
    float week1[700];
    for(int i=0;i<100;i++)
    {
         printf("Enter temprature of the day");
        scanf("%f",week1[i]);
    }

    for(int i=0;i<7;i++)
    {
        printf("%f",week1[i]);
    }
    return 0;
}
