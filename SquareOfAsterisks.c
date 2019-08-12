#include<stdio.h>
#include<stdlib.h>

void squareOfAsterisks(int);
void hollowSquareOfAsterisks(int);

int main(){
    int numOfAsterisks;
    printf("Enter number of asterisks to form a square:");
    scanf("%d",&numOfAsterisks);
    
    do{
        printf("Enter number of asterisks to form a square :");
        scanf("%d",&numOfAsterisks);
        
        if(numOfAsterisks<=0 || numOfAsterisks>20){
            printf("Out of size boundry (1~20), Please try again....\n");
        }
        else{
            printf("the number of asterisks is : %d\n", numOfAsterisks);
            printf("The Full Square of asterisks diagram is shown below:\n");
            squareOfAsterisks(numOfAsterisks);
            
            printf("The Hllow Square of asterisks diagram is shown below:\n");
            hollowSquareOfAsterisks(numOfAsterisks);
        }
    
    }while(1);
    
}

void squareOfAsterisks(int n){
    
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=n ; j++){
            if(j!=n)
                printf("*");
            else{
                printf("*\n");
            }
        }
    }
}

void hollowSquareOfAsterisks(int n){
    
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=n ; j++){
            if((i==1) || (i==n) || (j==1) || (j==n)){ 
                if(j==n){
                    printf("*\n");
                }else{
                    printf("*");
                }
            }else{
                printf(" ");    
            }
        }
    }
}
