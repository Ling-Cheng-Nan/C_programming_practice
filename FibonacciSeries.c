#include <stdio.h>
#include <stdlib.h>

int Fibonacci_recursive(int);
void showFibonacciSeries(int);

int main(void){
    int number = 0;
    printf("Please enter a integer to evaluate the n-th Fibonacci number:\n");
    scanf("%d", &number);
    
    printf("The %d-th Fibonacci number is : %d\n", number, Fibonacci_recursive(number));
    
    showFibonacciSeries(number);
        
    return 0;
}


int Fibonacci_recursive(int n){
    int result = 0;
    
    //base case
    if(n == 0 ||n == 1) return n;
    else 
        result = Fibonacci_recursive(n-1) + Fibonacci_recursive(n-2);
    
    return result;
}
//end of Fibonacci_recursive

void showFibonacciSeries(int n){
    
    for(int i=1 ; i <= n ; i++){
        if(n == 0) printf("%d \n", Fibonacci_recursive(0));
        else 
            if(i == n) printf("%d \n.......end of series......", Fibonacci_recursive(i));
            else printf("%d, ", Fibonacci_recursive(i));
        
    }
}
//end of showFibonacciSeries

