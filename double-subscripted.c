#include <stdio.h>
#include <stdlib.h>

#define STUDENTS 3
#define EXAMS 4

int maximum(const int [][EXAMS], int, int);
int minimum(const int [][EXAMS], int, int);
double avg(const int [], int);
void printArray(const int [][EXAMS], int, int);

int main(void){
	int student;
	const int studentGrade[STUDENTS][EXAMS] = {{77,65,85,91},{45,92,53,78},{86,74,99,90}};
	
	printf("The array is : \n");
	printArray(studentGrade, STUDENTS, EXAMS);
	
	printf("\n\nThe lowest grade is : %d\nThe highest grade is : %d\n",
			minimum(studentGrade, STUDENTS, EXAMS),
			maximum(studentGrade, STUDENTS, EXAMS));
	
	for(int student=0 ; student < STUDENTS ; student++){
		printf("The average grade for student %d is %.2f \n", student, avg(studentGrade[student], EXAMS));
	}

	return 0;
}

int maximum(const int grades[][EXAMS], int pupils, int tests){
	
	int highest = 0;
	
	for(int i = 0 ; i < pupils ; i++){
		for(int j = 0 ; j < tests ; j++){
			if(highest >= grades[i][j]) 
				highest = highest;
			else 
				highest = grades[i][j];
		}
	}
	
	return highest;
}

int minimum(const int grades[][EXAMS], int pupils, int tests){
	
	int lowest = 100;
	
	for(int i = 0 ; i < pupils ; i++){
		for(int j = 0 ; j < tests ; j++){
			if(lowest <= grades[i][j]) 
				lowest = lowest;
			else 
				lowest = grades[i][j];
		}
	}
	
	return lowest;
}

double avg(const int setOfGrades[], int tests){
	int total = 0;
	
	for(int i = 0 ; i < tests ; i++){
		total+=setOfGrades[i];
	}

	return (double)total/tests;
}

void printArray(const int grades[][EXAMS], int pupils,int tests){
	printf("                [0]  [1]  [2]  [3]");
	for(int i = 0; i < pupils ; i++){
		printf("\nstudentGrade[%d] ", i);
		for(int j = 0 ; j < tests; j++){
			printf("%-5d",grades[i][j]);
		}
	}
}
