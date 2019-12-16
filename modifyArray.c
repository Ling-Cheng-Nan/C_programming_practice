#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

void modifyArray(int [], int);
void modifyElement(int);

int main(void){
	
	int a[SIZE]={0, 1, 2, 3, 4};
	
	printf("Effect of passing entire array by reference:\n\nThe "
		"values of the originalarray are:\n");
	
	for(int i=0 ; i < SIZE ; i++){
		printf("%3d", a[i]);
	}

	printf("\n");
	
	modiifyArrayu(a, SIZE);
	
	
	return 0;
}

void modifyArray(int b[], int size){
	
	for(int j=0 ; j < size ; j++){
		b[j] *= 2;	
	}
}

void modifyElement(int e){
	printf("Value in modifyElement is %d\n", e *= 2);
}

