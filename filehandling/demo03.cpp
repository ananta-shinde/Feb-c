#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    FILE* myinfofile = fopen("info.txt","a");
    if(myinfofile != NULL)
    {
        fprintf(myinfofile,"%s","this is text from demo3");
    }
    return 0;
}
