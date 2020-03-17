#include "fraction.h"
#include <stdio.h>
#include <stdlib.h>

void printfFraction(Fraction* );

void printfFraction(Fraction* pf){
    printf("%d/%d\n",pf->numerator, pf->denominator);
}