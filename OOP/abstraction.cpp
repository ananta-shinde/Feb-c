#include<stdio.h>
#include<string.h>
class Employee{
    private:
    int empid;
    char name[40];

    public:
    Employee()
    {
        this->empid = 0;
        strcpy(this->name,"default");
    }

    Employee(int number,char* name){
           this->empid = number;
           strcpy(this->name,name);
    }

    void setEmpid(int number){
        this->empid = number;
    }

    int getEmpid()
    {
        return this->empid;
    }

    void setName(char *name){
        strcpy(this->name,name);
    }

    char* getName()
    {
        return this->name;
    }

    void printEmployee()
    {
        printf("\nempid : %d, Name : %s",this->empid,this->name);
    }

};


int main(int argc, char const *argv[])
{
    Employee emp1,emp2(400,"Ram");
    emp1.setEmpid(500);
    emp1.setName("Ananta");
    emp1.printEmployee();

    // emp2.setEmpid(400);
    // emp2.setName("Ram");
    emp2.printEmployee();
    return 0;
}
