#include <stdio.h>
#include <stdlib.h>
#include <time.h>   //for clock(), clock_t, CLOCKS_PER_SEC


/*prototype declaration*/
long long recursive_factorial(long long);
long long iterative_factorial(long long);

int main(void){
    long long number;
    long long itera_result;
    long long recur_result;
    double time_spent_iter = 0.0, time_spent_recu = 0.0;
    clock_t iter_begin, iter_end;
    clock_t recu_begin, recu_end;
    

    printf("input the specified number to evaluate the factorial: \n");
    scanf("%lld", &number);
    
    /*evaluate the iterative factorial, then record the execution time spent*/
    iter_begin = clock();
    itera_result = iterative_factorial(number);
    iter_end = clock();
    time_spent_iter += (double)(iter_end - iter_begin)/CLOCKS_PER_SEC;

    printf("the iterative factorial result is %lld \n", itera_result);
    printf("iterative factorial execution time is : %f seconds\n", time_spent_iter);

    /*evaluate the recursive factorial, then record the execution time spent*/
    recu_begin = clock();
    recur_result = recursive_factorial(number);
    recu_end = clock();
    time_spent_recu += (double)(recu_end - recu_begin)/CLOCKS_PER_SEC;

    printf("the recursive factorial result is %lld \n", recur_result);
    printf("recursive factorial execution time is : %f seconds\n", time_spent_recu);

    return 0;
}

/*function implementation*/
//fatorial function with recursion way
long long recursive_factorial(long long n){
    
    if(n <= 1){
        return 1;
    } //end if 
    else{
        return n*recursive_factorial(n-1);
    } //end else 
}
//end of function recursive_factorial

//factorial function with iterative way
long long iterative_factorial(long long n){
    
    long long result = 1;

    for(long long i = n ; i > 0 ; i--){
        result *= i;
    }
    
    return result;
}
//end of function with iterative_factorial
