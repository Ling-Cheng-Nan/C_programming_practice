#include <stdio.h>
#include <stdlib.h>
#include "structPointer.h"

int main(void){
    struct person person1 = {20, 50.4, "Ken"};
    Person* ptr1 = &person1;
    Person person2 = {25, 70.2, "Sam"};
    
    Person* ptr2 = &person2;
    printf("%s aged %d and weight:%lf \n", (*ptr2).name, ptr2->age, person2.weight);


    (*ptr2).weight = 87.2;
    ptr2->age = 21;
    
    printf("%s aged %d and weight:%lf \n", person1.name, ptr1->age, person1.weight);
    printf("%s aged %d and weight:%lf \n", ptr2->name, ptr2->age, (*ptr2).weight);

    changeAge(ptr2, 99);
    printf("%s aged %d and weight:%lf \n", ptr2->name, ptr2->age, (*ptr2).weight);

    changeName(&person2, "Kelly");
    printf("%s aged %d and weight:%lf \n", ptr2->name, ptr2->age, (*ptr2).weight);

    return 0;
}

