#include<stdio.h>
#include"myheader.h"
int main(int argc, char const *argv[])
{
    int num;
    scanf("%d",&num);
     

    if(checkEven(num))
    {
        int result= add(50,40);
        printf("allocated building is A, %d",result);
    }else{
        printf("allicated building is B");
    }


    return 0;
}
