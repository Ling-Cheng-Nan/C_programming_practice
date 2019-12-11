#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100
#define max 1000
#define min 1

int linearSearch(const int[], int, int);

int mainv(void){
	
	int a[SIZE];
	int x;
	int searchKey;
	int element;
	
	/*generate data in array*/
	srand(time(NULL));
	for(int i = 0 ; i < SIZE ; i++){
		a[i] = (rand()%(max-min)+min);
	}

	/*enter search key*/
	printf("Enter integer search key:\n");
	scanf("%d", &searchKey);

	/*search by linear search*/
	element = linearSearch(a, searchKey, SIZE);

	/*display result*/
	(element == -1)? printf("Value %d was not found in the array.\n", searchKey):printf("Found value %d with array index %d.\n", searchKey, element);

	return 0;
}

int linearSearch(const int a[], int key, int size){
	
	for(int i = 0 ; i < size  ; i++){
		
		if(a[i] == key){	
			return i;
		} /*end of if*/
	} /*end of for*/

	return -1; //key not foud in given array
}
/*end function linearSearch*/
