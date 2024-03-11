#include<stdio.h>
int main(int argc, char const *argv[])
{
    int count = 0; // initalization
    count++;
    while (count!=0) // condition
    {
        printf("Enter 0 to exit");
        scanf("%d",&count);
    }
    
    return 0;
}
