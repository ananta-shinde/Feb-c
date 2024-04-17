#include<stdio.h>

int findlargest(int n1,int n2,int n3)
{
     if(n1>n2 && n1>n3)
    {
        return n1;
    }else if(n2>n1 && n2>n3)
    {
        return n2;
    }
    else 
    {
        return n3;
    }
}

int main(int argc, char const *argv[])
{
    int a=20,b=130,c=40;
    findlargest(20,55,56);
    printf("largest number is %d",findlargest(a,50,c));
    return 0;
}
