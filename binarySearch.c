#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 15
#define max 28
#define min 0

void assignArrayValue(int [], int);
int binarySearch(const int [], int, int, int);
void printHeader(void);
void printRow(const int[], int, int, int);

int main(void){
	
	srand(time(NULL));
	
	int a[SIZE];
	int key;
	int result;
	
	assignArrayValue(a, SIZE);
	
	printf("Enter a number between 0 and 28:");
	scanf("%d", &key);
	
	printHeader();
	
	//search for key in array a
	result = binarySearch(a, key, 0, SIZE-1);

	if(result != -1){
		printf("\n%d found in array element %d\n", key, result);
	}
	else{
		printf("\n%d not found\n", key);
	}

	return 0;
}

void assignArrayValue(int a[],int size){
	
	for(int i = 0 ; i < SIZE ; i++){
		a[i]=rand()%(max-min)+min;
	}
	/*end for*/

}

int binarySearch(const int b[], int searchKey, int low, int high){
	
	int middle;
	while(low <= high){
		
		middle = ( low + high )/2;
		printRow(b, low, middle, high);
		
		if(searchKey == b[middle]){
			return middle;
		}//end if
		else if(searchKey < b[middle]){
			high = middle-1;
		}//end else-if
		else{
			low = middle+1;
		}
		//end else
	}

	return -1;
}


void printRow(const int b[], int low, int mid, int high){
	
	for(int i = 0 ; i < SIZE ; i++){
		
		if( i<low || i>high ){
			printf("    ");
		} //end if
		else if( i == mid ){
			printf("%3d*", b[i]);
		} //end else-if
		else{
			printf("%3d ", b[i]);
		} //end else
	} //end for
	
	printf("\n");
}

void printHeader(void){
	
	printf("\nSubscrits:\n");
	
	for(int i = 0 ; i < SIZE ; i++){
		printf("%3d ", i);
	}//end for
	
	printf("\n");

	for(int i = 0 ; i <= 4*SIZE ; i++){
		printf("-");
	} //end for

	printf("\n");
}
