#include<stdio.h>

class Student
{
    int rollNo;
    int contact;

   
    
    public :
    void setRollNo(int n){
         rollNo = n;   
          }

    void printStudentData(){
        printf("Student data: Roll No:%d",rollNo);
    }
};

int main(int argc, char const *argv[])
{
    Student s,s2;

    s.setRollNo(40);
    s.printStudentData();
    // s.setRollNo;
    s2.setRollNo(100);
    s2.printStudentData();

    return 0;
}
