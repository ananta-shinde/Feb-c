#include<stdio.h>

void swap(int x,int y)
{
    int temp = x;
    x = y;
    y = temp;
}
int main(int argc, char const *argv[])
{
    int a=20,b=30;
    printf("a:%d, b: %d",a,b);
    // swaping
    swap(a,b);
    printf("a:%d, b: %d",a,b);
    return 0;
}
