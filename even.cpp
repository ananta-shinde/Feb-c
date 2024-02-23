// Accept a number from user , and print if it is even or odd

#include<stdio.h>
int main(int argc, char const *argv[])
{
    // 1.accepting a number
    int num;
    printf("Enter a number :");
    scanf("%d",&num);

    // check if number is even or odd and print message
    if(num%2 == 0){
        printf("\nThe number is even");
    }
    else{
         printf("\nThe number is odd");
    }
    return 0;
}
