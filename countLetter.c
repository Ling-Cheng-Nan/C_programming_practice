#include <stdio.h>
#include <stdlib.h>

int main(void){
    int grade=0;
    int count_A=0;
    int count_B=0;
    int count_C=0;
    int count_D=0;
    int count_F=0;

    printf("Enter the letter grades.\n");
    printf("Enter the \"EOF\" charater to end input. (Ctrl+D)\n");
    
    while( (grade = getchar()) != EOF){
        switch(grade){
        
            case 'A':
            case 'a':
                ++count_A;
                break;
            
            case 'B':
            case 'b':
                ++count_B;
                break;
            
            case 'C':
            case 'c':
                ++count_C;
                break;
            
            case 'D':
            case 'd':
                ++count_D;
                break;
            
            case 'F':
            case 'f':
                ++count_F;
                break;
            
            case '\n':
            case '\t':
            case ' ':
                break;
            
            default:
                printf("Incorrect letter grade entered. ");
                printf("Enter a new grade.....\n");
                break;
        }
    }
    
    
    /*output summary of results*/
    printf("\nTotal for each letter grade are:\n");
    printf("A: %d\n", count_A);
    printf("B: %d\n", count_B);
    printf("C: %d\n", count_C);
    printf("D: %d\n", count_D);
    printf("F: %d\n", count_F);
    
    return 0;
}
