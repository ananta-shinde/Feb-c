// for loop : for(initialization;condition;inc/dec)
//{

//}

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;// declaration
    int temp;// initialization
    printf("enter number :");
    scanf("%d",&num);
    for(int i=0;i<=num;i++)
    {
        printf("%d\t",i);
    } 
    return 0;
}
