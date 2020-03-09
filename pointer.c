#include <stdio.h>
#include <stdlib.h>

int main(void){
	int b = 2;
	int* pointer = &b;
	
	double a = 1.5;
	double* aPtr = &a;

	printf("value of variable b = %d\n", b);
	printf("address of b = %p\n", &b);

	printf("value of pointer = %p\n", pointer);
	printf("value of *pointer = %d\n", *pointer);
	printf("value of &pointer = %p\n", &pointer);
	
	return 0;
} 

