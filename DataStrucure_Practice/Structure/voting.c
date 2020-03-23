#include <stdio.h>
#include <stdlib.h>

#define MaxCandidates 7
#define MaxNameLength 30

typedef struct person{
    char name[ MaxNameLength + 1];
    int numVotes;
} Person;

int main(void){

    Person candidate[MaxCandidates+1];

    return 0;
}