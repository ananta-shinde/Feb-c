// accpet any 5 numbers from user and print largest number
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int numbers[5];
    for(int i=0;i<5;i++)
    {
        printf("Enter a number");
        scanf("%d",&numbers[i]);
    }

    int largest = numbers[0];
    for(int i=0;i<5;i++)
    {
        if(numbers[i] > largest){
            largest = numbers[i];
        }
    }
    printf("largest number is : %d",largest);
    return 0;
}
