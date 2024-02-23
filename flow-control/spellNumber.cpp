// accept a signle digit number and print its spelling

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter signle digit number");
    scanf("%d",&num);
    // if(num == 1)
    // {
    //      printf("One");
    // }
    // if(num == 2){
    //     printf("Two");
    // }
    // if(num == 3){
    //     printf("Three");
    // }
    // if(num > 9){
    //     printf("Invalid input");
    // }

    switch(num)
    {
        case 1 : printf("ONE");
        break;
        case 2 : printf("TWO");
        break;
        case 3 : printf("Three");
        break;
        // default : printf("invalid input");
    }
    return 0;
}
