// accept five numbers from user and print their average
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int numbers[5];
    for(int i=0;i<5;i++)
    {
        printf("Enter a number");
        scanf("%d",&numbers[i]);
    }

    for(int i=0;i<5;i++)
    {
         printf("%d\t",numbers[i]);
    }
    // average of array
    int sum = 0;
    for(int i=0;i<5;i++)
    {
        sum =sum + numbers[i];
    }

    printf("\nArray Average is :%d",sum/5);
    
    // average of even numbers from array
    sum = 0;
    int count = 0;
    for(int i=0;i<5;i++)
    {  
        if(numbers[i]%2 == 0)
        {
            count++;
            sum =sum + numbers[i];
        }    
    }
    printf("\nAverage of even numbers from array : %d",sum/count);
    return 0;
}
