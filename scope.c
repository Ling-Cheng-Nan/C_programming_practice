#include <stdio.h>
#include <stdlib.h>

/*function prototype*/
void useLocal(void);
void useStaticLocal(void);
void useGlobal(void);

int x = 1; //global variable

int main(void){
    
    int x = 5; /*local variable to main*/
    
    printf("\nlocal x in outer scope of main is %d\n", x);
    { /* start new scope */
        int x = 7;
	printf("\nlocal x in inner scope of main is %d\n", x);
    }//end of new scope
    printf("local x in outer scope of main is %d\n", x);
    
    printf("first iteration of useLocal, useSaticLocal, useGlobal call...\n");
    useLocal();
    useStaticLocal();
    useGlobal();
    
    printf("second iteration os useLocal, useStaticLocal, useGlobal call...\n");
    useLocal();
    useStaticLocal();
    useGlobal();

    printf("\nlocal x in main is %d\n", x);    
    return 0;
}

/* function implementation */

/* useLocal reinitializes local variable x during each call
 * */
void useLocal(void){
    
    int x = 25; /*initialized each time useLocal is called*/
    
    printf("\nlocal x in useLocal is %d after entering useLocal.\n", x);
    x++;
    printf("local x in useLocal is %d before exiting useLocal.\n", x);
}
//end of function useLocal

/* useStaticLocal initializes static local variable x only the first time 
 * the function is called; value of x is saved between calls to this function
 * */
void useStaticLocal(void){

    static int x = 50; /*initialized only first time useStaticLocal is called*/
    
    printf("\nlocal static x is %d on entering useStaticLocal.\n", x);
    x++;
    printf("local static x is %d on exiting useStaticLocal.\n", x);
}
//end of function useStaticLocal


/* function useGlobal modifies global variable x during each call 
 * */
void useGlobal(void){

    printf("\nglobal x is %d on entering useGlobal.\n", x);
    x *= 10;
    printf("global x is %d on exiting useGlobal.\n", x);
}
//end of function useGlobal
