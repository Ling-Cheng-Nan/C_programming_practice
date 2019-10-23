#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "constraint_set.h" //self define header files with double quotes


int main(void){
    
    srand(time(NULL));
    
    /* variables declation */
    int NODE = (rand()%(MAX_NODE-MIN_NODE))+MIN_NODE;
    int DIMENSION = (rand()%(MAX_D-MIN_D))+MIN_D;
    
    int missing_dimension = (rand()%(DIMENSION-MIN_D))+MIN_D; //must less than DIMENSION
    int missing_position;

    /*
    for(int i = 0 ; i < NODE_SIZE100 ; i++){
        printf("random number is : %d\n", (rand()%(MAX_NODE-MIN_NODE))+MIN_NODE);
    }
    */
    
    printf("total number of node is : %d\n", NODE);
    printf("dimension each node is  : %6d\n", DIMENSION);
    printf("missng dimension is     : %6d\n", missing_dimension);
    
    
    
    return 0;
}
