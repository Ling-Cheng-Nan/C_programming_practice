
#include "fractionFunction.h"

int main(void){
    
    Fraction f1 = {5, 9};
    Fraction * pf = &f1;

    printfFraction(pf);
    int a, b;
    scanf("%d %d", &a, &b);
    printf("HCF of %d and %d is %d\n", a, b, HCF(a, b));
    printf("%d\n",isMutualPrime(a,b));
    return 0;
}


