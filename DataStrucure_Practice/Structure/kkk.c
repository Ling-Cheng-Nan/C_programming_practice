#include <stdio.h>
#include <stdlib.h>
typedef struct date{
    int day;
    int month;
    int year;
} Date;

int main(void){
    struct date normalDate = {15, 07, 2032};
    Date borroweDate = {31, 12, 2012};
    Date* pD = &normalDate;
    Date* pB = &borroweDate;

    //scanf("%d %d %d", pD->day, pD->month, pD->year);

    printf("normal date : %d %d, %d\n", pD->day, pD->month, pD->year);
    printf("borrow date : %d %d, %d\n", pB->day, pB->month, pB->year);
    
    return 0;
}