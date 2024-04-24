#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    FILE* myfile = fopen("Mydata.txt","r");
    char data[40];
    if(myfile != NULL){
        printf("file opened in read mode");
        
        // fscanf(myfile,"%s",data);
        fgets(data,40,myfile);

        printf("\n%s",data);
    }
    else{
        printf("Can not open file to read");
    }


    return 0;
}
