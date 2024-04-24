
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    FILE* myinfofile = fopen("info.txt","w");
    if(myinfofile != NULL)
    {
        printf("file found");
        fprintf(myinfofile,"%s","Sample text");
    }
    else{
        printf("file not found");
    }
    return 0;
}
