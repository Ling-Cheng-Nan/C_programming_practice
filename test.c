/* header files */
#include <stdio.h>
#include <stdlib.h>

/* prototype declaration here... */
void greeting();
void greeting2();

int main(){
	
    //variables declaration	
    greeting();
    greeting2();
    printf("The version displayed the last line of the C program. \n'''THE END''' ");

    return 0;
}

/* function implement */
void greeting(){
	printf("Hello World!...");
}

void greeting2(){
    printf("greeting2 function...");
}

