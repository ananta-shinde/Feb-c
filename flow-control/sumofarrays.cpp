#include<stdio.h>
int main(int argc, char const *argv[])
{
    int numbers[5];

    for(int i=0;i<5;i++)
    {
        printf("Enter a number");
        scanf("%d",&numbers[i]);
    }
    
    int sum = 0;
    for(int i=0;i<5;i++)
    {
        sum = sum + numbers[i];  
    }
    printf("%d",sum);
   
    return 0;
}
