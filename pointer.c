#include <stdio.h>
#include <stdlib.h>
void doubleValue(int *);

int main(void){

	int b = 2;
	int* p = &b;
	double a = 1.5;
	double *aPtr = &a;

	printf("value of variable b = %d\n", b);
	printf("address of b = %p\n", &b);
	printf("value of  p = %p\n", p);
	printf("value of *p = %d\n", *p);
	printf("value of &p = %p\n", &p);
	

	int slices = 20;
	int *pSlices = &slices;
	printf("Slices : %d\n", slices);
	printf("Slices : %d\n", *pSlices);
	
	slices = 21;
	printf("Slices : %d\n", slices);
	printf("Slices : %d\n", *pSlices);
	
	*pSlices = 22;
	printf("Slices : %d\n", slices);
	printf("Slices : %d\n", *pSlices);
	
	slices ++;
	(*pSlices)++;
	printf("Slices : %d\n", slices);
	printf("Slices : %d\n", *pSlices);
	
	int x = 5;
	int* pX = &x;
	doubleValue(&x);
	printf("x = %d\n", x);
	doubleValue(pX);
	printf("x = %d\n", *pX);
	return 0;
}

void doubleValue(int* x){
	(*x) = (*x) * 2;

}
