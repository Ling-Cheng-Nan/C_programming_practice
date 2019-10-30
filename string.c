#include <stdio.h>
#include <stdlib.h>

void echo(char[]);
void echo2(char[]);

int main(void){
    char string[] = "first";
    char string2[20];
    char string3[30];

    for(int i=0 ; string[i] != '\0' ;i++){
        printf("%c ", string[i]);
    }
    printf("\n");
    
    scanf("%19s", string2);
    scanf("%s", string3);
    
    echo(string2);
    echo2(string2);
    echo2(string3);

    return 0;
}

void echo(char str[]){
    
    for(int i=0 ; str[i] != '\0' ; i++){
        printf("%c", str[i]);
    }

    printf("\n");
}

void echo2(char str[]){
    
    printf("%s\n", str);
}
