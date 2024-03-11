#include<stdio.h>
int main(int argc, char const *argv[])
{
    for(int j=0;j<5;j++)
    {
        int i=0; // initialization
        while(i<5)// condition
        {
            printf("*");
            i++;     //  increment
        }
        printf("\n");
    }
    return 0;
}
