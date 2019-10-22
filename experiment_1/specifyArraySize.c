#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "constraint_set.h"


int main(void){
    srand(time(NULL));
    
    for(int i = 0 ; i < SIZE100 ; i++)
        printf("random number is : %d\n", (rand()%100)+1);
    //int s[SIZE10];
    //int t[SIZE20];
    
    
    return 0;
}
