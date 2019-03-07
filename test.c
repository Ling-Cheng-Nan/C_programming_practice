/* header files */
#include <stdio.h>
#include <stdlib.h>

/* prototype declaration here... */
void greeting();

int main(){
	
	//variables declaration
	char[20] name;
	
	greeting();
	
	scanf("Enter your name : %s\n", &name);
	printf("Hello, %s! Welcome to C Programming world....\n", *name);
	
	//greeting(name);
	
	return 0;
}

/* function implement */
void greeting(){
	printf("Hello World!...");
}

/*
void greeting(char *name){
	char* name;
	printf("Hello, %s", &name);
}
*/
