#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int length;
    int width;
} Rectangle;

typedef struct {
    int x;
    int y;
} position;

typedef struct buildingPlan{
    char owner[30];
    Rectangle rectangle;
    position position;
} Building;

int main(void){

    Rectangle myRect = {6, 10};
    Rectangle myRect2 = {4, 8};

    printf("Length : %d\nWidth : %d\n", myRect.length, myRect.width);
    printf("Length : %d\nWidth : %d\n", myRect2.length, myRect2.width);

    Building myHouse = {"Sam Ling", {5, 14}, {32, 48} };
    printf("The house at location (%d, %d) of size (%d %d) is owned by %s\n"
            , myHouse.position.x, myHouse.position.y
            , myHouse.rectangle.length, myHouse.rectangle.width
            , myHouse.owner);

    Building *pointerStruct = &myHouse;
    printf("my House position : (%d, %d)\n", pointerStruct->position.x, pointerStruct->position.y);
    return 0;
}