#include<stdio.h>
#include<string.h>
struct Student
{
    int rollNo;
    char name[40];
};

int main(int argc, char const *argv[])
{
    Student s;
    Student s2;
    s.rollNo = 20;
    strcpy(s.name,"Ananta");
    s2.rollNo = 50;
    strcpy(s2.name,"john");

    printf("Student details are : Roll no: %d, name: %s ",s2.rollNo,s2.name);
    return 0;
}
