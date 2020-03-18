#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include "constraint_set.h"


//function implementation
void assignArrayRandomValue(int node[NODE_SIZE10][DIMEN_SIZE03]){
    for(int i = 0 ; i < NODE_SIZE10 ; i++){
        for(int j = 0 ; j < DIMEN_SIZE03 ; j++){
            node[i][j] = (rand()%(MAX-MIN))+MIN;
        }
    }
}
//end of assignArrayRandomValue

//print out the contents of Array
void showArrayContent(int node[NODE_SIZE10][DIMEN_SIZE03]){
    for(int i = 0 ; i < NODE_SIZE10 ; i++){
        for(int j = 0 ; j < DIMEN_SIZE03 ; j++){
            (j == 2)? printf("%2d \n", node[i][j]) : printf("%2d ", node[i][j]);
        }
    }
}
//end of showArrayContent

void copyArray(int node[][3], int copy[][3]){
    for(int i = 0 ; i < NODE_SIZE10 ; i++){
        for(int j = 0 ; j < DIMEN_SIZE03 ; j++){
            copy[i][j] = node[i][j];
        }
    }
}

void assignNull(int node[][3]){
    srand(time(NULL)); //set random seed
    
    for(int i = 0 ; i < NODE_SIZE10 ; i++){
        if((rand()%(2-0))==0) 
            node[i][1] = -1;
        else 
            continue; 
    }
}