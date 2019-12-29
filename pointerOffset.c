#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int b[] = {10, 20, 30, 40}; //declare aan array b with 4 elements
    int *bPtr = b; //initialize a pointer bPtr be name of b
    //int i; //counter 
    int offset; //counter

    /* 
     * subscript notation
     */

    printf("Array b printed with : \nArray subscript notation : \n");

    for(int i = 0 ; i < 4 ; i++){
        printf("b[%d] = %d\n", i, b[i]);
    }

    /* 
     * pointer/offset notation
     */

    return 0;
}
