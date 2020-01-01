#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	
	FILE *pFile; //pointer of file
	char buffer[] = {'H','e','y'};
	
	pFile = fopen("open.txt", "w");

	if(NULL == pFile){
		printf("open failure!!!\n");
		return 1;
	}
	else{
		fwrite(buffer, 1, sizeof(buffer), pFile);
	}
	
	//close file
	fclose(pFile);

	
	
	
	double *Tmp;
	FILE *pFileBefore;
	char cBuffer[8];

	pFileBefore = fopen("Before.txt", "wb");

	Tmp = (double *)malloc(sizeof(double)* 10);
	
	 memset(Tmp, 0x00, sizeof(double)* 10);

	if(NULL == pFileBefore){
		
		printf("write file failure!!\n");
		
		return 1;
	
	}
	
	for(int i = 0 ; i < 10  ; i++){
		
		Tmp[i] = (double)(i);
		
		printf("%f\n", Tmp[i]);
		
		sprintf(cBuffer, "%f", Tmp[i]);

		fwrite(cBuffer, 1, sizeof(double)+1, pFileBefore);
	}

	//close file
	fclose(pFileBefore);
	
	return 0;
}


