#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

extern int errno ;

int main () {

    FILE * pf;
    int errnum;
    
    pf = fopen ("unexist.txt", "rb");
	
    if (pf == NULL) {

        errnum = errno;
        
        fprintf(stderr, "Value of errno: %d\n", errno);
        perror("Error printed by perror.....");
        
        fprintf(stderr, "Error opening file: %s\n", strerror( errnum ));
    
    } else {    
        fclose (pf);
    }
    
    int dividend = 20;
    int divisor = 0;
    int quotient;
    
    if( divisor == 0){
        fprintf(stderr, "Division by zero! Exiting...\n");
        exit(-1);
    }
    
    quotient = dividend / divisor;
    fprintf(stderr, "Value of quotient : %d\n", quotient );
    
    
    return 0;
}