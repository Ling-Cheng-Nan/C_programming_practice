#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "constraint_set.h" //self define header files with double quotes
#include "function.h"

int main(void){
    srand(time(NULL)); //set random seed 
	
    /* variables declation */
    int NODE=(rand()%(MAX_NODE-MIN_NODE))+MIN_NODE;
    
	int DIMENSION=(rand()%(MAX_D-MIN_D))+MIN_D;    
    
	int missing_dimension=(rand()%(DIMENSION-MIN_D))+MIN_D; //must less than DIMENSION
    
	int node[NODE_SIZE10][DIMEN_SIZE03]={0};
    
    printf("total number of node is : %d\n", NODE);
    printf("dimension each node is  : %6d\n", DIMENSION);
    printf("missng dimension is     : %6d\n", missing_dimension);

    printf("before assign array value...\n");
    showArrayContent(node); 
    assignArrayRandomValue(node);

    printf("\nafter assign array value...\n");    
    showArrayContent(node);
    
    assignArrayRandomNull(node);
    printf("\nafter assign null value randomly ...\n");
    showArrayContent(node);

    return 0;
}


	

