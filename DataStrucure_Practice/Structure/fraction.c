
#include "fractionFunction.h"

int main(void){
    
    Fraction f1 = {5, 9};
    Fraction * pf = &f1;

    printfFraction(pf);
    return 0;
}

