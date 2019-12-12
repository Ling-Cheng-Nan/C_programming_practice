#include <stdlib.h>
#include <stdio.h>

#define rowSize 3
#define colSize 5

typedef int column[colSize];

void detectNullValue(column [],int );

int main(void){
	
	int b[2][2] = {{1,2},{3,4}};
	int c[rowSize][colSize] = {{0, -1, 2, 6, 8},{3, 1, -1, 4, 3},{5, -1, -1, 1, 2}};

	int row_size = sizeof(c)/sizeof(c[0]);
	int col_size = sizeof(c[0])/sizeof(int);
	
	printf("size of c = %d\n", row_size);
	printf("size of c[0] = %d\n\n", col_size);

	for(int i = 0 ; i < row_size ; i++){
		for(int j = 0 ; j < col_size ; j++){
			printf("%2d ", c[i][j]);
		}
		printf("\n");
	}
	
	detectNullValue(c, rowSize);

	return 0;
}

void detectNullValue(column a[], int size){
	
	int row = size;
	int col = sizeof(a[0])/sizeof(int);
	
	for(int i = 0 ; i < row ; i++){
		for(int j = 0 ; j < col ; j++){
			
			/*detect the content of the array element is null or not
			 * -1 stands for null value here
			 * */
			if(a[i][j] == -1)
					printf("\nthe array with indice [%d][%d] is null", i, j);
		}
	}
}
