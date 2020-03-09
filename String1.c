#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

    char favFood[50]; //
    
    printf("Enter your favorite food? : ");
    scanf("%49s", favFood);
    printf("%s\n", favFood);

    int charCount = strlen(favFood);
    // while(favFood[charCount] != '\0'){
    //     printf("%c", favFood[charCount]);
    //     charCount++;
    // }
    printf("\nTHs character count is %d \n", charCount);


    return 0;
}