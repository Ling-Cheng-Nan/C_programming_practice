#include <stdio.h>
#include <stdlib.h>

void showDeposit(double,double,int);
double amountOfDeposit(double,double,int);

int main(){

    double endOfAmount=0;
    double p, r;
    int n;
    
    printf("Enter the original amount invested :\n");
    scanf("%lf", &p);
    printf("Enter the annual interest rate :\n");
    scanf("%lf", &r);
    printf("Enter the number of years :\n");
    scanf("%d", &n);
    
    /* evaluate the end of amount of deposit */
    endOfAmount = amountOfDeposit(p, r,	n);
    showDeposit(p, r, n);

    printf("\nthe original amount invested (i.e. the principal) %.2lf\n"
           "the annual interest rate per year %.2lf\n"
           "the nmuber of years %d\n"
           "the amount on deposit at the end of the %d-th year is : $%.2lf\n"
           , p, r, n, n, endOfAmount);
    
    return 0;
}

void showDeposit(double p, double r, int n){
    double a=p;
    
    printf("%4s%21s\n", "Year", "Amount of deposit");
    
    for(int i=1; i<=n ;i++){
        a *= (1+r);
        printf("%4d%21.2lf\n", i, a);
    }
}

double amountOfDeposit(double p, double r, int n){
    double a=p;
    
    for(int i=0; i<n ;i++){
        a *= (1+r);
    }

    return a;
}
