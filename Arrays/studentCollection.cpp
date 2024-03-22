#include<stdio.h>
int main(int argc, char const *argv[])
{
    char name[5];
    printf("Enter your name");
    // scanf("%s",&name);
    gets(name);

    // printf("%s",name);
    puts(name);
    return 0;
}
