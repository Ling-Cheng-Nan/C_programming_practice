#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//struct declaration
typedef struct {
    int date;
    char month[4]; //one position for \0 to end string
    int year;
} Date;

typedef struct {
    char name[31];
    int age;
    char gender;
    //char address[100];
} Student;

//function prototype
void printDate(Date d);

int main(void){
    Date dob;
    //Student stud1, stud2;
    
    dob.date  = 15;
    strcpy(dob.month, "Nov");
    dob.year  = 2016;
    
    printf("Dob's birthday is %s. %d, %d.\n", dob.month, dob.date, dob.year);    
    printDate(dob);






    return 0;
}

void printDate(Date d){
    printf("%s. %d, %d\n", d.month, d.date, d.year);
}

