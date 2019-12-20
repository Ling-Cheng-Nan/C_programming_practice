#include <stdio.h>
#include <stdlib.h>

int cubeByValue(int); //call-by-value
void cubeByReference(int *);//call-by-reference

int main(void){
	int number;
	int cubeV, cubeR;
	
	printf("\nEnter the number n\n");
	scanf("%d", &number);
	
	printf("The original value of number is %d\n", number);
	
	cubeV = cubeByValue(number);
	
	printf("After cube by value but before cube buy reference, the value of number is : %d\n", number);
	cubeByReference(&number);
	
	printf("After cube by reference, the value of number is : %d\n", number);
	
	printf("The new value of number is %d (cube-By-Reference)\n", cubeV);
	printf("The new value of number is %d (cube-By-Reference)\n", number);

	return 0;
}

int cubeByValue(int n){
	return n*n*n;
}

void cubeByReference(int *nPtr){
	*nPtr = (*nPtr) * (*nPtr) * (*nPtr);
}
