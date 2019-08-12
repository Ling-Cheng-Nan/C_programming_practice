#include<stdio.h>
#include<stdlib.h>
void multipleOfSecond(int, int);

int main(){
    int n1, n2;
    printf("Enter two integers:\n");
    scanf("%d\n%d", &n1, &n2);
    
    multipleOfSecond(n1, n2);
}

void multipleOfSecond(int n1, int n2){
    if(n1%n2 == 0) {printf("%d is multiple of %d\n", n1, n2);}
    else {
        printf("%d is not mutiple of %d\n", n1, n2);
    }
}
