#include<stdio.h>
#include<stdlib.h>

/*function prototype  declaraton*/
void gradePass(int);

int main(){
    int grade = 0 ;
    
    printf("Enter your grade :\n");
    scanf("%d",& grade);
    
    gradePass(grade);
}

/*fuction implementation*/
void gradePass(int grade){

    if (grade < 60){
        printf("Your grade is %d.\nFailed\n", grade);
    }
    else if (100 > grade && grade >= 60){
        printf("Your grade is %d.\nPass!!\n", grade);
    }
}
