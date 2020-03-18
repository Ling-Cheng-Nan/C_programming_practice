#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>
#include "constraint_set.h"
void evaluateStatistic(int n[][DIMEN_SIZE03]);

//function implementation
void assignArrayRandomValue(int node[NODE_SIZE1000][DIMEN_SIZE03]){
    for(int i = 0 ; i < NODE_SIZE1000 ; i++){
        for(int j = 0 ; j < DIMEN_SIZE03 ; j++){
            node[i][j] = (rand()%(MAX-MIN))+MIN;
        }
    }
}
//end of assignArrayRandomValue

//print out the contents of Array
void showArrayContent(int node[NODE_SIZE1000][DIMEN_SIZE03]){
    for(int i = 0 ; i < NODE_SIZE1000 ; i++){
        for(int j = 0 ; j < DIMEN_SIZE03 ; j++){
            (j == (DIMEN_SIZE03-1))? printf("%4d \n", node[i][j]) : printf("%4d ", node[i][j]);
        }
    }
}
//end of showArrayContent

void copyArray(int node[NODE_SIZE1000][DIMEN_SIZE03], int copy[NODE_SIZE1000][DIMEN_SIZE03]){
    for(int i = 0 ; i < NODE_SIZE1000 ; i++){
        for(int j = 0 ; j < DIMEN_SIZE03 ; j++){
            copy[i][j] = node[i][j];
        }
    }
}

void assignNull(int node[NODE_SIZE1000][DIMEN_SIZE03]){
    srand(time(NULL)); //set random seed
    
    for(int i = 0 ; i < NODE_SIZE1000 ; i++){
        if((rand()%(2-0))==0) 
            node[i][1] = -1;
        else 
            continue; 
    }
}

void assignNullAtFixedIndex(int node[NODE_SIZE1000][DIMEN_SIZE03], int index){
    srand(time(NULL)); //set random seed
    
    for(int i = 0 ; i < NODE_SIZE1000 ; i++){
        if((rand()%(2-0))==0) 
            node[i][index] = -1;
        else 
            continue; 
    }
}

void assignNullAtFixedIndexRandomRatio(int node[NODE_SIZE1000][DIMEN_SIZE03], int index, double ratio){
    srand(time(NULL)); //set random seed
    int count = 0;

    if(ratio > 1 || ratio < 0){
        printf("Ratio out of range! (valid null ratio from 0 to 1)\n");
    }
    else{
        for(int i = 0 ; i < NODE_SIZE1000 ; i++){
            //if((rand()%(2-0)) == 0) 
            if((rand()%(100-1)+1 <= 100*ratio)){
                node[i][index] = -1;
                count++;
            }
            else 
                continue; 
        }
        printf("null count = %d\n", count);
    }
}

void evaluateStatistic(int n[][DIMEN_SIZE03]){
    
    double Mean[DIMEN_SIZE03]={0};
    double Variance[DIMEN_SIZE03]={0};
    double standardDeviation[DIMEN_SIZE03]={0};
    int countM = 0;
    int countV = 0;
    int nulledIndex = 0;

    for(int i = 0 ; i < DIMEN_SIZE03 ; i++){
        for(int j = 0 ; j < NODE_SIZE1000 ; j++){
            if(n[j][i] != -1){
                countM++;
                Mean[i] += (double)n[j][i];
            }
            else continue;
        }
        Mean[i] /= countM;
        
        if(countM != NODE_SIZE1000) nulledIndex = i;

        //printf("valid count of Mean = %d\n", countM);
        countM = 0;
    }

    for(int i = 0 ; i < DIMEN_SIZE03 ; i++){
        for(int j = 0 ; j < NODE_SIZE1000 ; j++){
            if(n[j][i] != -1){
                countV++;
                Variance[i] += pow(((double)n[j][i]-Mean[i]), SQUARE);
            }
            else continue;
        }

        Variance[i] /= countV;
        standardDeviation[i] = sqrt(Variance[i]);

        //printf("valid count of Variance = %d\n", countV);
        countV = 0;
    }

    //show
    printf("\n");
    for(int i = 0 ; i < DIMEN_SIZE03 ; i++){
        if(nulledIndex == i) printf("**** Nullized index %d ****\n", i);
        printf("Mean at dimension %d = %lf\n"
               "Variance at dimension %d = %lf\n"
               "Standard Deviation at dimension %d = %lf\n"
               , i, Mean[i], i, Variance[i], i, standardDeviation[i]);
        printf("\n");
    }

    

}