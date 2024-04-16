#include<stdio.h>
#include"myheader.h"
int main(int argc, char const *argv[])
{
    int num;
    printf("enter roll No");
    scanf("%d",&num);

    if(checkEven(num))
    {
        printf("allocated building is D");
    }else{
        printf("allicated building is E");
    }
    return 0;
}
