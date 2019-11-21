#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

int main(void){
	
	char string1[]="first";	
	char string2[SIZE+1];
	
	scanf("%20s", string2);
	
	printf(string1);
	printf("\n");
	printf(string2);

	return 0;
}
