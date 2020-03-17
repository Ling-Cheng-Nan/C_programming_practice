#include "fraction.h"
#include <stdio.h>
#include <stdlib.h>

void printfFraction(Fraction *);
Fraction addFraction(Fraction, Fraction);
Fraction subFraction(Fraction, Fraction);
Fraction mulFraction(Fraction, Fraction);
Fraction divFraction(Fraction, Fraction);
int HCF(int, int);
int isMutualPrime(int, int);

void printfFraction(Fraction* pf){
    printf("%d/%d\n",pf->numerator, pf->denominator);
}

Fraction addFraction(Fraction a, Fraction b){
    
    Fraction result;
    result.numerator   = (a.numerator*b.denominator)+(a.denominator*b.numerator);
    result.denominator = a.denominator*b.denominator;
    
    return result;
}

Fraction subFraction(Fraction a, Fraction b){
    
    Fraction result;
    result.numerator   = (a.numerator*b.denominator)-(a.denominator*b.numerator);
    result.denominator = a.denominator*b.denominator;
    
    return result;
}

Fraction mulFraction(Fraction a, Fraction b){
    
    Fraction result;
    result.numerator   = a.numerator*b.numerator;
    result.denominator = a.denominator*b.denominator;
    
    return result;
}

Fraction divFraction(Fraction a, Fraction b){
    
    Fraction result;
    result.numerator = a.numerator*b.denominator;
    result.denominator = a.denominator*b.numerator;
    
    return result;
}

int HCF(int a, int b){
    int hcf;
    if(b > a) hcf = HCF(b, a);
    else if(a % b == 0) hcf = b;
    else hcf = HCF(b, (a%b) );

    return hcf;
}

int isMutualPrime(int a, int b){
    if(HCF(a,b)==1) return true;
    else return false;
}