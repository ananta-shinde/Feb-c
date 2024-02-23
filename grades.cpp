// accept marks in percentage from user,
// print grades corresponding to marks entered
// 0 - 34 : F
// 35 - 50 : C
// 51 - 65 : B
// 66 - 80 : A
// 81 - 100 : A+

#include<stdio.h>
int main(int argc, char const *argv[])
{
    // accepting input and storing it
    float marks;
    printf("Enter marks obtained in percentage :");
    scanf("%f",&marks);

    // check grades
    if(0 < marks && marks <= 34){
          printf("You got F grade");
    }
    if(35 <= marks && marks <=50){
          printf("You got C grade");
    }
    if(51 <= marks && marks <=65){
          printf("You got B grade");
    }
    if(66 <= marks && marks <=80){
          printf("You got A grade");
    }
    if(81 <= marks && marks <=100){
          printf("You got A+ grade");
    }
    return 0;
}
