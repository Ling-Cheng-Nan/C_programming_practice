#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "constraint_set.h" //self define header files with double quotes
#include "function.h"
#include <math.h>

void evaluateMean(int [][3]);


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
    
    // assignArrayRandomNull(node);
    // printf("\nafter assign null value randomly ...\n");
    // showArrayContent(node);
    
    evaluateMean(node);

    return 0;
}


void evaluateMean(int n[][3]){
    
    double Mean[DIMEN_SIZE03]={0};
    double Variance[DIMEN_SIZE03]={0};
    double standardDeviation[DIMEN_SIZE03]={0};

    for(int i = 0 ; i < DIMEN_SIZE03 ; i++){
        for(int j = 0 ; j < NODE_SIZE10 ; j++){
            Mean[i] += (double)n[j][i];
        }
        Mean[i] /= NODE_SIZE10;
    }

    for(int i = 0 ; i < DIMEN_SIZE03 ; i++){
        for(int j = 0 ; j < NODE_SIZE10 ; j++){
            Variance[i] += pow(((double)n[j][i]-Mean[i]), SQUARE);
        }
        Variance[i] /= NODE_SIZE10;
        standardDeviation[i] = sqrt(Variance[i]);
    }

    //show
    printf("\n");
    for(int i = 0 ; i < DIMEN_SIZE03 ; i++){
        printf("Mean at dimension %d = %lf\n"
               "Variance at dimension %d = %lf\n"
               "Standard Deviation at dimension %d = %lf\n"
               , i, Mean[i], i, Variance[i], i, standardDeviation[i]);
        printf("\n");
    }

    

}

	

