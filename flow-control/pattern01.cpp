// ***
// **
// *

#include<stdio.h>
int main(int argc, char const *argv[])
{
     for(int j=0;j<3;j++)
     {
        for(int i=0;i<3;i++)
        {
            if(i<(3-j))
            printf("*");
        }
        printf("\n");
     }
    return 0;
}
