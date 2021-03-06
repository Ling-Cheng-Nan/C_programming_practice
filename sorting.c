#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


#define SIZE 22
#define max 1000
#define min 1

void assignArray(int[], int);
void showArrayContent(int[], int);
void swap(int*, int* ); //prototype of function swap (call-by-reference)

//bubble-sort
void bubbleSort(int[], int);    //call-by-value
void bubbleSortRef(int[], int); //call-by-refence

//insertion-sort
void insertionSort(int[], int);    //call-by-value
void insertionSortRef(int[], int); //call-by-refence

void median(int[], int);
double mean(const int[], int);

int main(void){
	
	srand(time(NULL));
	
	//initialize array
	int unsortedArray[SIZE];
	int   sortedArray[SIZE];
	double mean_value = 0;

	assignArray(unsortedArray, SIZE);	
	
	//before sortinog
	printf("\nbefore sorting array....\n");
	showArrayContent(unsortedArray, SIZE);
	
	/* several sorting functions below
	 * 
	 * 1. bubble sorting with call-by-value
	 * 2. bubble sorting call-by-reference
	 * 
	 * 3. insertion sort with call-by-value
	 * 4. insertion sort with call-by-reference
	 *  
	 * */
	
	//bubbleSort(unsortedArray, SIZE);
	//bubbleSortRef(unsortedArray, SIZE);
	//insertionSort(unsortedArray , SIZE);
	//insertionSortRef(unsortedArray , SIZE);

	//after sorting
	printf("\nafter sorting array.....\n");
	showArrayContent(unsortedArray, SIZE);
	
	median(unsortedArray, SIZE);
	
	//evaluate th mean of all the elements within specified array
	mean_value = mean(unsortedArray, SIZE);
	printf("Mean = %.2lf\n", mean_value);
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

void assignArray(int a[], int size){
	
	//int max = 100;
	//int min = 0;

	for(int i = 0 ; i < size ; i++){
		a[i] = (rand()%(max - min)) + min;
	}
}

void showArrayContent(int a[], int size){
	
	for(int i = 0 ; i < size ; i++){
		(( i%10) == 0 && (i!=0) )? printf("\n%d ", a[i]) : printf("%d ", a[i]);
	}

}

void swap(int* a, int* b){
	int temp;
	
	//swap two address with reference
	temp = *a;
	*a = *b;
	*b = temp;
}

void bubbleSort(int a[], int size){
	int temp;
	int passes = 0;
	int comparisons = 0;

	printf("\nbubble sort with call-by-value....\n");

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

void bubbleSortRef(int a[], int size){
	//void swap(int*, int* ); //prototype of function swap declare inside the caller functon bubbleSortRef
	
	int passes = 0;
	int comparisons = 0;
	
	printf("\nbubble sort with call-by-reference....\n");

	for(int i = 0 ; i < size-1 ; i++){
		for(int j = (i+1) ; j < size ; j++){
			if(a[i] >= a[j]){
				//printf("a[i] = %d, a[j] = %d\n", a[i], a[j]);
				swap(&a[i], &a[j]);
				//printf("a[i] = %d, a[j] = %d\n", a[i], a[j]);
			}
			comparisons++;
		}
		passes++;
	}
	printf("\n\nthere are %d comparisons during bubbleSort.\n", comparisons);
	printf("there are %d passes during bubbleSort.\n", passes);
}

void insertionSort(int a[], int size){
	
	int temp;
	int passes = 0;
	int comparisons = 0;

	printf("\ninsertion sort with call-by-value....\n");


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
				
				}
				else continue;

				comparisons++;	
			}
		}

		passes++;
	}

	printf("\n\nthere are %d comparisons during bubbleSort.\n", comparisons);
	printf("there are %d passes during bubbleSort.\n", passes);
}

void insertionSortRef(int a[], int size){
	
	int passes = 0;
	int comparisons = 0;

	printf("\ninsertion sort with call-by-reference....\n");

	for(int i = 0 ; i < size ; i++){
		if(i == 0){
			continue;
		}
		else {
				for(int j = 0 ; j < (i-1) ; j++){
					if(a[i] <= a[j]){
						swap(&a[i], &a[j]);
					}
					else continue;
				
				comparisons++;
				}
		}
		
		passes++;
	}

	printf("\n\nthere are %d comparisons during bubbleSort.\n", comparisons);
	printf("there are %d passes during bubbleSort.\n", passes);
}

void median(int a[], int size){
	if( (size % 2) == 0){
		printf("\nMedian = %.2lf \n", (double)(a[size/2+1]+a[size/2])/2);
	}
	else {
		printf("\nMedian = %.2lf \n", (double)a[size/2]);
	}
}

double mean(const int a[], int size){
	double mean = 0;
	int total = 0;

	for(int i = 0 ; i < size ; i++){
		total += a[i];
	}

	return mean = (double)total/size;
}