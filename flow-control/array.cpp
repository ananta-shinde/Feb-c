#include<stdio.h>
int main(int argc, char const *argv[])
{
    int numbers[] = {20,45,57,58};

    for(int i = 0;i<4;i++)
    {
        printf("%d\t",numbers[i]);
    }

    printf("while loop output\n");
    int  i = 0;
    while (numbers[i]!= 58)
    {
        printf("%d\t",numbers[i]);
        i++;
    }
    
    return 0;
}
