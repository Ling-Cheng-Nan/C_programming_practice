#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*function prototype declaration*/
int factorial(int);
void outputFactorial(int);
void askForFactorial();

void printArrayPerRow(int [], int);


int main(void){
    
   int grades[][3]={
       {0, 4, 3},
       {2, 1, 5}
   };
//    printf("%d \n", sizeof(grades[0])/sizeof(grades[0][0]));
//    printf("%d \n", sizeof(grades[0]));
   for(int i = 0 ; i < (sizeof(grades)/sizeof(grades[i])) ; i++){
       printArrayPerRow(grades[i], sizeof(grades[i])/sizeof(grades[0][0]));
   }

   while(1){
       askForFactorial();
   }

    return 0;
}






/*function implementation*/
int factorial(int n){
    
    int factorial = 1;
    for (int i = n ; i > 1 ; i--){
        factorial *= i;
    }
}

void outputFactorial(int input){
    printf("The factorial of %d is : %d\n", input, factorial(input));
}

void askForFactorial(){
    
    int number = 0;
    
    printf("Enter the number to evaluate th factorial: ");
    scanf("%d", &number);

    outputFactorial(number);

}

void printArrayPerRow(int arr[], int size){
    for(int i = 0 ; i < size ; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

