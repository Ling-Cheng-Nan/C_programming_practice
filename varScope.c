/* header files included */

#include <stdio.h>

/* function prototype */
void useLocal(void);
void useStaticLocal(void);
void useGlobal(void);


//global variable
int x = 1;


/* main */
int main (void){
    
    //local variable in main funtion
    int x = 5;

    printf("local x in outer scope of main is %d\n", x);

    {   //start scope of variable x
        int x = 7;
	printf("local x in inner scope of main is %d\n", x);
    } //end of scope

    printf("local x in outer scope os main is %d\n", x);
    
    useLocal();       /* useLocal has automatic local    */
    useStaticLocal(); /* useStaticLocal has static local */
    useGlobal();      /* useGlobal uses global           */

    useLocal();       /* useLocal reinitializes automatic local */
    useStaticLocal(); /* static local x retains its prior value */
    useGlobal();      /* global x is also retains its value     */

    
    printf("\nlocal x in main is %d\n", x);
    
    return 0;
} //end of main

/* function implementation */

void useLocal(void){
    int x = 25;

    printf("\nlocal x in useLocal is %d after entering useLocal\n", x);
    
    x++;
    
    printf("local x in useLocal is %d before exiting useLocal\n", x);
    
} //end of useLocal


void useStaticLocal(void){
    
    /* initialized only first time useStaticLocal is called */
    static int x = 50;
    
    printf("\nlocal static x is %d on entering kuseStaticLocal\n", x);
    
    x++;

    printf("local static x is %d on exiting useStaticLocal\n", x);
} //end of useStaticLocal


void useGlobal(void){
    
    printf("\nglobal x is %d on entering useGlobal\n", x);
    
    x *= 10;
    
    printf("global x is %d on exiting useGlobal\n", x);
} //end of useGlobal

