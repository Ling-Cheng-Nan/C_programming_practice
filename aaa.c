#include<stdio.h>
#include<stdlib.h>

//function prototype
void sayhello(void);

int main(){
    printf("test Hello World!\n");
    sayhello();
    
    return 0;
}

/*function implementation*/
void sayhello(){
    printf("Hello World!\n");
}
