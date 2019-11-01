#include <stdio.h>
#include <stdlib.h>
//struct declaration
typedef struct date{
    int date;
    int month;
    int year;
} Date;

//function prototype
void printDate(struct date d);

int main(void){
    struct date dob, pete;
    Date MerryChristmas;

    dob.date  = 15;
    dob.month = 11;
    dob.year  = 2016;

    scanf("%d %d %d", &pete.year, &pete.month, &pete.date);    
    printf("Dob's birthday is %d/%d/%d.\n", dob.year, dob.month, dob.date);    
    printf("Pete's birthday is %d/%d/%d.\n", pete.year, pete.month, pete.date);
    printDate(pete);

    
    scanf("%d %d %d", &MerryChristmas.year, &MerryChristmas.month, &MerryChristmas.date);
    printDate(MerryChristmas);
    






    return 0;
}

void printDate(struct date d){
    printf("%d/%d/%d\n", d.year, d.month, d.date);
}

