#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	
	char *str;

	/* initial memory alloction */
	str = (char *)malloc(15);
	strcpy(str, "tutorial-point");
	printf("String = %s, Address = %u\n", str, str);

	printf("size of str = %d\n", sizeof(str));

	/* Reallocating memory */
	str = (char *)realloc(str, 25);
	strcat(str, ".com");
	printf("String = %s, Address = %u\n", str, str);
	printf("After reallocation, the size of str = %d\n", sizeof(str));

	free(str);
	
	
	return 0;
}
