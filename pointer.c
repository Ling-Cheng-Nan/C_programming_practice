#include <stdio.h>
#include <stdlib.h>

int main(void){
	int b = 2;
	int* pointer = &b;
	
	printf("  value of b = %d\n", b);
	printf("address of b = %p\n", &b);
	printf("value of pointer = %p\n", pointer);
		
	
	return 0;
}
