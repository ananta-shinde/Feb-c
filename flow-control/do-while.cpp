#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i=0;
    while (i>0)
    {
        printf("%d\n",i);
    }
    printf("********************\n");
    do{
         printf("%d\n",i);
    }while (i>0);
    return 0;
}
