#include<stdlib.h>
#include<stdio.h>
void showASCII(void);

int main(){
    printf("the ASCII code of 'A' is : %d\n"
           "the ASCII code of 'B' is : %d\n"
           "the ASCII code of 'C' is : %d\n"
           "the ASCII code of '0' is : %d\n" 
           "the ASCII code of '1' is : %d\n"
           "the ASCII code of '2' is : %d\n"
          /* "the ASCII code of '$' is : %d\n"
           "the ASCII code of '*' is : %d\n"
           "the ASCII code of '+' is : %d\n"
           "the ASCII code of '/' is : %d\n"
           "the ASCII code of '\' is : %d\n"
           "the ASCII code of ' ' is : %d\n"*/
           ,'A','B','C','0','1','2');//,'$','*','+','/','\',' ');
    showASCII();    
    return 0;
}

void showASCII(){
    char c ;
    do{
    printf("Enter the character : \n");
    scanf("%c\n", &c);
    printf("The ASCII code of %c is : %d\n", c, c);
    }while(c != 0);
}
