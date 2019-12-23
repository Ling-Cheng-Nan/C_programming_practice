/*header files include*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*function prototype*/
void convertToUppercase(char *); //non-constant pointer to non-constant data
void printCharacters(const char *);//non-constant pointer to constant data


int main(void){

    //variables declarations
    char string[] = "charaters andjk ,;/ [ngr] @#23.5416";
    char string2[] = "efjknfiuklgvu561+65f31f568p;-[2985klmio";

    printf("The string before conversion : %s\n", string);
    //demonstrate non-constant pointer to non-constant data
    convertToUppercase(string);    
    printf("The string after conversion : %s\n", string);
    
    //demonstrate non-constant pointer to constant data
    printCharacters(string2);


    return 0;
}

/*function implemtation*/
void convertToUppercase(char *sPtr){
    while( *sPtr != '\0'){
        if(islower(*sPtr)){
            *sPtr = toupper(*sPtr);
        }
        sPtr++;
    }// end while

}//end convertToUppercase

void printCharacters(const char *sPtr){
    for( ; *sPtr != '\0' ; sPtr++){
        printf("%c", *sPtr);
    }
    printf("\n");

}