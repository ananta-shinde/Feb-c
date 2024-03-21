
#include<stdio.h>
int main(int argc, char const *argv[])
{
    float week[7];
    printf("Enter temprature of week one by one :\n");
    for(int i=0;i<7;i++)
    { 
        printf("enter temp : ");
        scanf("%f",&week[i]);
    }

//  avg temprature of week
    float sum = 0;
     for(int i=0;i<7;i++)
    { 
       sum = sum+week[i];
    }

    printf("Avg temp of a week is : %f",sum/7);


    return 0;
}
