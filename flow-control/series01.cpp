//0 1 2 3 5 8 13 .....  upto 100
#include<stdio.h>

int main(int argc, char const *argv[])
{
    for(int i=1;i<=100;i++)
    { 
        if(i*i<=100)
        {
            printf("%d\t",i*i);
        
        }
        else{
            break;
        }
    }
    return 0;
}
