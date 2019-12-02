#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char name[11];
} Identity;

typedef struct{
    double x;
    double y;
} Coordinates;

typedef struct{
    Identity;
    Coordinates;
} Points;

int main(void){
	
	Points p;
	p->Identity = "Sam";
	p.Coordinates.x=1;
	p.Coordinates.y=2;
	
	printf("point \"%s\" x = %d ; y = %d\n",p->Identity, p.Coordinates.x, p.Coordinates.y);

	return 0;
}
