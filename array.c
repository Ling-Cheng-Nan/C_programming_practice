#include <stdlib.h>
#include <stdio.h>
#define SIZE 10
#define RESPONSE_SIZE 40
#define FREQUENCY_SIZE 11 


int main(void){
    int total = 0;
    int array[SIZE] = {1, 13, 24, 53, 642, 57, 84, 24, 4, 76};
    int frequency[FREQUENCY_SIZE] = {0};
    int responses[RESPONSE_SIZE]  = {1, 1, 2, 2, 4, 5, 4, 6, 3, 7,
                                     8, 9, 10, 1, 7, 3, 4, 9, 5, 7,
                                    10, 2, 3, 7, 10, 5, 7, 3, 5, 5,
                                    5, 6, 7, 8, 8, 9, 10, 3, 6, 2};
    
    for(int i = 0 ; i < SIZE ; i++){
        total += array[i];
    }
    
    for(int answer = 0 ; answer < RESPONSE_SIZE ; answer++){
        ++frequency[responses[answer]];
    }

    printf("%s%17s\n", "Rating", "Fequency");

    for(int rating = 1 ; rating < FREQUENCY_SIZE ; rating++){
        printf("%6d%17d\n", rating, frequency[rating]);
    }

    printf("total sum in array is : %d\n", total);
    
    return 0;
}

