#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 7

void rollDie(int [SIZE]);
void showFreq(int []);

int main(void){
	
	int frequency[SIZE]={0};
	
	srand(time(NULL));  //random generator
	
	printf("%s%17s\n", "Face", "Freqency");
	
	rollDie(frequency);
	showFreq(frequency);

	return 0;
}


void rollDie(int freq[SIZE]){
	
	int face;
	for(int i=1 ; i <= 6000 ; i++){
		face = 1 + rand()%6;

		++freq[face];
	}
}

void showFreq(int freq[SIZE]){
	
	for(int face=1 ; face < SIZE ; face++){
		printf("%4d%17d\n", face, freq[face]);
	}
}


