#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[13];
    int grade;
} Student;

int main(void){
    Student stu1;
    strcpy(stu1.name, "Sam");
    stu1.grade = 555;
    printf("student %s has grade %d\n", stu1.name, stu1.grade);
    Student studentGrade[5][4];

    
    int grades[][3]={
        {1, 2, 3},
        {4, 5, 6}
    };
    printf("%d \n", grades[1][2]);
    printf("size of grades : %d \n", sizeof(grades));
    printf("number of elements : %d \n", sizeof(grades)/sizeof(grades[0]));
    printf("size of struct Student : %d\n", sizeof(Student));
    printf("size of struct Student : %d\n", sizeof(stu1));
    printf("size of struct Student : %d\n", sizeof(stu1.name));
    printf("size of struct Student : %d\n", sizeof(stu1.grade));

    


    return 0;
}