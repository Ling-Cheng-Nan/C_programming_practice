#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "constraint_set.h" //self define header files with double quotes
#include "function.h"


void possiblity(double p);


int main(void){
    srand(time(NULL)); //set random seed 
	
    /* variables declation */
    int NODE=(rand()%(MAX_NODE-MIN_NODE))+MIN_NODE;
	int DIMENSION=(rand()%(MAX_D-MIN_D))+MIN_D;    
	int missing_dimension=(rand()%(DIMENSION-MIN_D))+MIN_D; //must less than DIMENSION
	int node[NODE_SIZE1000][DIMEN_SIZE03]={0};
    
    printf("total number of node is : %d\n", NODE);
    printf("dimension each node is  : %6d\n", DIMENSION);
    printf("missng dimension is     : %6d\n", missing_dimension);

    //printf("before assign array value...\n");
    //showArrayContent(node); 
    printf("\nafter assign array value...\n");
    assignArrayRandomValue(node);
    //showArrayContent(node);
    
    int clone[NODE_SIZE1000][DIMEN_SIZE03] = {0};
    copyArray(node, clone);
    //assignNullAtFixedIndex(clone,2);
    assignNullAtFixedIndexRandomRatio(clone, 2, 0.42);
    //showArrayContent(clone);
    printf("---Statistics of original array:---\n");
    evaluateStatistic(node);
    
    printf("---Statistics of post-nullize array:---\n");
    evaluateStatistic(clone);

    //possiblity(0.36);

    return 0;
}

void possiblity(double p){
    srand(time(NULL)); //set random seed
    
    int count = 0;

    if( p > 1 || p < 0) printf("Error!!\n");
    else{
            for(int i = 0 ; i < 1000 ; i++){
                if((rand()%(100-1)+1 <= 100*p)) 
                    count++;
                    printf("count = %d\n",count);
            }
    }

    printf("count <= %lf = %d\n", p, count);
}

	

