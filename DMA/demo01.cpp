#include<stdio.h>
#include<stdlib.h>
struct Student
{
    int rollNo;
    int uid;
};

int main(int argc, char const *argv[])
{
    int numbers[10];
    // Student list[5];
    Student* list;
    int noOfStudent;
    printf("Enter no of students");
    scanf("%d",&noOfStudent);

    list = (Student*)malloc(sizeof(Student)*noOfStudent);
    //  list = (Student*)calloc(noOfStudent,sizeof(Student));
     list[2].rollNo = 100;

     printf("Enter no of students");
    scanf("%d",&noOfStudent);
    // list = (Student*)calloc(noOfStudent,sizeof(Student));
    realloc(list,noOfStudent*sizeof(Student));

    free(list);


    

    printf("%d",list[2].rollNo);


    return 0;
}
