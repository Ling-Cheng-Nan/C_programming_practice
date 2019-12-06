#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


#define SIZE 21
#define max 1000
#define min 1

void assignArray(int[], int);
void showArrayContent(int[], int);
void bubbleSort(int[], int);
void insertionSort(int[], int);
void median(int[],int);
//void mean(const int[]);

int main(void){
	
	srand(time(NULL));
	
	//initialize array
	int unsortedArray[SIZE];
	int   sortedArray[SIZE];

	assignArray(unsortedArray, SIZE);	
	
	//before sortinog
	printf("\nbefore sorting array....\n");
	showArrayContent(unsortedArray, SIZE);
	
	/* seveeral sorting functions below
	 * 1. bubble sorting
	 * 2. insertion sorting
	 * 3. 
	 * */
	
	//bubbleSort(unsortedArray, SIZE);
	insertionSort(unsortedArray , SIZE);

	//after sorting
	printf("\nafter sorting array.....\n");
	showArrayContent(unsortedArray, SIZE);
	
	median(unsortedArray, SIZE);
	//mean(sortedArray);

	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

void assignArray(int a[],int size){
	
	//int max = 100;
	//int min = 0;

	for(int i = 0 ; i < size ; i++){
		a[i] = (rand()%(max - min)) + min;
	}
}

void showArrayContent(int a[],int size){
	
	for(int i = 0 ; i < size ; i++){
		(( i%10) == 0 && (i!=0) )? printf("\n%d ", a[i]) : printf("%d ", a[i]);
	}

}

void swap(int* a, int* b){
	
}

void bubbleSort(int a[], int size){
	int temp;
	int passes = 0;
	int comparisons = 0;

	for(int i = 0 ; i < size-1 ; i++){
		
		for(int j = (i+1) ; j < size ; j++){
			
			//sorting by acsending order
			if(a[i] >= a[j]){
				//swap two elements
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
			
			//increase number of comparisons
			comparisons++;
		}
		
		//increase number of passes 
		passes++;
	}

	printf("\n\nthere are %d comparisons during bubbleSort.\n", comparisons);
	printf("there are %d passes during bubbleSort.\n", passes);

}

void insertionSort(int a[], int size){
	
	int temp;
	
	for(int i = 0 ; i < size ; i++){
		
		if(i==0){ 
			continue;
		}
		else{
			for(int j = 0 ; j < (i-1) ; j++){
				if(a[i] <= a[j]){
					
					//swap two elements
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				
				}else continue;	
			}
		}
	}
}

void median(int a[],int size){
	((size%2) == 0)? printf("\nMedian = %lf \n", (double)(a[size/2+1]+a[size/2])/2):printf("\nMedian = %lf \n",(double)a[size/2]);
}
