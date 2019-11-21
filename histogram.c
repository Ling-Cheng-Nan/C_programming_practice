#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
 
void showHistogram(int);
void passArray(int []);

int main(void){
    
	int n[SIZE]={1, 5, 9, 15, 21, 7, 6, 3, 16, 11};
	
	passArray(n);

	return 0;
}

void showHistogram(int k){
	for(int i=0 ; i < k ; i++){
		printf("%c", '*');
	}
	printf("\n");
}

void passArray(int a[SIZE]){
	
	printf("%s%13s%17s\n", "Element", "Value", "Historam");
	
	for(int i=0 ; i<SIZE ; i++){
		
		printf("%7d%13d         ", i, a[i]);
		
		showHistogram(a[i]);
		
	}
}
