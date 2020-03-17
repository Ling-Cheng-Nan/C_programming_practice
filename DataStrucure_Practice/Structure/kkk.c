#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "type.h"

void printDate(Date );
void printDatePointer(Date *);

int main(void){
    
    // struct date normalDate = {15, "Aug", 2032};
    // Date borroweDate = {31, "Dec", 2012};
    // Date* pD = &normalDate;
    // Date* pB = &borroweDate;

    // // scanf("%d %d %d", &normalDate.month, &normalDate.month, &normalDate.year);

    // printf("normal date : %d %s, %d\n", pD->day, pD->month, pD->year);
    // printf("borrow date : %d %s, %d\n", pB->day, pB->month, pB->year);
    
    // printDate(normalDate);
    // printDate(*pD);
    // printDatePointer(pD);
    

    /*************************/
    // Student pupil[100];
    // FILE * in = fopen("input.txt", "r");
    // char temp[31];
    // getString(in, temp);
    // for(int i = 0 ; strcmp(temp, "END") ; i++){
        
    //     strcpy(pupil[i].name, temp);
    //     fscanf(in, "%d", &pupil[i].age);
    //     pupil[i].gender = readChar(in);

    //     getString(in, temp);
    // }
    
    // for(int i=0;i<100;i++)
    //     printf("%s %d %c\n",pupil[i].name, pupil[i].age, pupil[i].gender);

    return 0;
}

void printDate(Date d){
    printf("%s %d, %d\n", d.month, d.day, d.year);
}

void printDatePointer(Date *d){
    printf("%s %d, %d\n", d->month, d->day, d->year);
}
