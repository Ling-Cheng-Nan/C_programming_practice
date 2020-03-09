#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

size_t getSize(float *);

int main(void){
    float array[20];

    printf("\nThe number of bytes in the array is %d"
           "\nTHe number os bytes returned by getSize function is %d\n", sizeof(array), getSize(array));

    return 0;
}

size_t getSize(float *ptr){
    return sizeof(ptr);
}
