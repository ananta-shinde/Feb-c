#include<stdio.h>
int main(int argc, char const *argv[])
{
    float month[4][7];
    for(int i=0;i<4;i++)
    {
        printf("enter values for week %d",i+1);
        for(int j=0;j<7;j++)
        {
            printf("enter value for day%d",j+1);
            scanf("%f",&month[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<4;i++)
    { 
        for(int j=0;j<7;j++)
        {
            printf("%f\t",month[i][j]);
        }
        printf("\n");
    }
    return 0;
}
