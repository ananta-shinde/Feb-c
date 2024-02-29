#include<stdio.h>

int main(int argc, char const *argv[])
{
    for(int i=1;i<=100;i++)
    { 
            if(i%8 == 0 || i%10 == 0){
                printf("%d\n",i);
            }       
    }
    return 0;
}

