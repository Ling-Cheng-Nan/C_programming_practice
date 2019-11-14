#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include "constraint_set.h"


//function implementation
void assignArrayRandomValue(int node[NODE_SIZE20][DIMEN_SIZE05]){
    for(int i = 0 ; i < NODE_SIZE20 ; i++){
        for(int j = 0 ; j < DIMEN_SIZE05 ; j++){
            node[i][j] = (rand()%(MAX-MIN))+MIN;
        }
    }
}
//end of assignArrayRandomValue

void showArrayContent(int node[NODE_SIZE20][DIMEN_SIZE05]){
    for(int i = 0 ; i < NODE_SIZE20 ; i++){
        for(int j = 0 ; j < DIMEN_SIZE05 ; j++){
            (j == 4)? printf("%d \n", node[i][j]) : printf("%d ", node[i][j]);
        }
    }
}
//end of showArrayContent

void conventionalSkyline(int node[NODE_SIZE20][DIMEN_SIZE05]){
	
    
}
//end of conventionalSkyline

void k_dominant_Skyline(int node[NODE_SIZE20][DIMEN_SIZE05]){

}
//end of k_dominant_Skyline

