#include <math.h>
#include <stdio.h>
#include <stdlib.h>
/* function prototype delcaration */


int main(){
    double x;
    
    printf("Enter the value of x :");
    scanf("%lf\n", &x);
    
    printf("square root of %d is %.2lf\n", x, sqrt(x));
    printf("exponential of e^%d is %.2lf", x, exp(x));



    return 0;
}

/*function implementation*/

