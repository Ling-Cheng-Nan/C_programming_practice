#include <stdio.h>
#include <stdlib.h>

void reverseString(char [], int);

int main(void){
	
	char string[20];
	printf("Eneter a string with length 20 characters, \nmore than specified length would be discard : \n");
	
	scanf("%19s", string);
	printf("%d\n", sizeof(string));
	reverseString(string, sizeof(string));

	return 0;
}

void reverseString(char str[], int length){
	
	//if entered string length less than 20
	//output would be wrong
	//should be modified.
	char temp;
	
	printf("Before reversing string : %s\n", str);
	
	for(int i=0, j=(length-2) ; i<=j  ; i++, j--){
		
		//swap content of string arrray with index
		printf("%c %c => ", str[i], str[j]);

		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		
		printf("%c %c\n", str[i], str[j]);
	}
	
	//verify the input string has been reversed
	printf("After reversing string  : %s\n", str);

}
