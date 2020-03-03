#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void){

    char name[100];
    char *description;

    strcpy(name,"Zara Ali");

    //allocate memory dynamically
    description = malloc(200*sizeof(char));

    if(description == NULL){
        fprintf(stderr, "Error : unable to allocate required memory.\n");
    }else{
        strcpy(description, "Zara Ali a DPS student inclass 10th\n");
    }

    printf("Name = %s\n", name);
    printf("Description : %s\n", description);


    /* suppose you want to store bigger description */
    description = realloc( description, 20 * sizeof(char) );
	
    if( description == NULL ) {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    } else {
      strcat( description, "She is in class 10th");
    }

    printf("Name = %s\n", name);
    printf("Description : %s\n", description);

    free(description);

    return 0;
}