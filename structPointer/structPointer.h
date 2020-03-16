#include <string.h>
typedef struct person{
    int age;
    double weight;
    char name[30];
} Person;


void changeAge(Person *, int);

void changeAge(Person *someone, int newAge){
    someone->age = newAge;
}

void changeName(Person *someone, char *newname){
    strcpy(someone->name, newname);
    //someone->name = newname;
}