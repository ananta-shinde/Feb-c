#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,c;
    char temp='D';
    char* ptr;
    printf("%d\n",a);
    printf("%d\n",&a);
    printf("%d\n",sizeof(a));
    c=a;
    printf("c:%d\n",c);
    a=30;
    printf("%d\n",a+1);
    printf("%d\n",&a);
    printf("%d\n",&a+2);
    printf("%c\n",temp);
    printf("%d\n",&temp);
    printf("%d\n",&temp+1);
    return 0;
}
