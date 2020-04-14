#include <stdio.h>
#include <stdlib.h>
/* directive */
#define QUEUE_SIZE 5

typedef struct node Node;
typedef struct queue Queue;

/* struct definition */
struct node{
    struct node* prev;
    struct node* next;
    int data;
};

struct queue{
    struct node* front;
    struct node* rear;
    int size;
};

/* function prototype declaration */
int ask_for_options();
int isEmpty(Queue* qu);
void init_queue(Queue* q);
void enqueue(Queue* qu, int value);

/* main */
int main(){
    int option, value;
    int extract_value;
    Queue queue;
    Queue* ptr = &queue;
    
    init_queue(ptr);
    
    while(option != 4){

        switch (ask_for_options()){
            case 1:
                /* enqueue */
                printf("Enter the value you want to push into the queue : \n");
                scanf("%d", &value);

                break;
            case 2:
                /* dequeue */

                break;
            case 3:
                /* show elements in queue */

                break;
            case 4:
                /* exit */
                printf("You are gonna leave this program.\n");
                exit(0);
                break;    
            default:
                printf("Error option, try again.\n");
                break;
        }    
    }    

    return 0;
}



/* function definition */
int ask_for_options(){

    int opt;

    printf("\nQUEUE Operations : \n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT\n");
    printf("====================\n");
    scanf("%d", &opt);

    return opt;
}

void init_queue(Queue* q){
    q->front = NULL;
    q->rear  = NULL;
    q->size = 0;
}

void enqueue(Queue* qu, int value){
    
    Queue* front;
    Queue* rear;



}

void dequeue(Queue* qu){
    
    Queue* front;
    Queue* rear;



}

int isEmpty(Queue* qu){
    if(qu->size == 0)
        return 1;
    else 
        return 0;
}