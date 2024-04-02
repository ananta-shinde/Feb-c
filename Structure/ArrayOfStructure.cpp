#include<stdio.h>
struct Student
{
    int rollNo;
    char name[40];
};

int main(int argc, char const *argv[])
{
    Student list[3];

    for(int i=0;i<3;i++)
    {
        printf("Enter Roll No");
        scanf("%d",&list[i].rollNo);
        printf("\nEnter name");
        scanf("%s",&list[i].name);
    }
    

    printf("details: roll no :%d, name: %s",list[4].rollNo,list[4].name);
    return 0;
}
