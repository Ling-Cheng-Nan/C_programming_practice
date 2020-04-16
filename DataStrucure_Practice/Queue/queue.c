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
int  ask_for_options();
void init_queue(Queue* );
void enqueue(Queue* , int);
int  dequeue(Queue* );
int  isEmpty(Queue* );
void display(Queue* );

/* main */
int main(){
    /* variables initialization*/
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
                enqueue(ptr, value);
                display(ptr);
                break;

            case 2:
                /* dequeue */
                extract_value = dequeue(ptr);
                printf("value of element extracted from front of queue : %d\n", extract_value);
                display(ptr);
                break;

            case 3:
                /* show elements in queue */
                display(ptr);
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
    
    /*check the size of queue is full or not*/
    if(qu->size == QUEUE_SIZE){
        printf("the Queue is full, can not enqueue any element.\n");
    }else{
        /*insert an element into the queue*/  
        Node* temp = malloc(sizeof(Node *));
        
        /*if queue is empty*/
        if(qu->size == 0){
            temp->prev = NULL;
            qu->front = temp; /*front and rear is indicate to same element*/
            
        }

        temp->data = value;
        temp->next = NULL;
        temp->prev = qu->rear; 
        qu->rear = temp;//move last element pointer to new node
        (qu->size)++; //increase queue size
        printf("the size of queue is : %d.\n", qu->size);
    }
}

int dequeue(Queue* qu){

    int extract_value = -1;
    
    /*check the size of queue is empty or not*/
    if(isEmpty(qu)){
        printf("the Queue is empty, can not dequeue anymore.\n");
    }else{
        Node* temp = qu->front;
        if(qu->size == 1){
            qu->rear = (qu->rear)->next;
        }
        extract_value = temp->data;
        qu->front = (qu->front)->next;
        
        free(temp);
        
        qu->size --; //decrease queue size
        printf("the size of queue is : %d.\n", qu->size);
    }
    
    return extract_value;
}

int isEmpty(Queue* qu){
    if(qu->size == 0)
        return 1;
    else 
        return 0;
}

void display(Queue* qu){

    Node* temp = qu->front;

    if(isEmpty(qu)) 
        printf("THE QUEUE IS EMPTY\n");
    else{
        // if(temp->prev == NULL){
        //         printf("(HEAD OF QUEUE)| ");
        // }
        while(temp != NULL){
            printf("| %d | ", temp->data);
            temp = temp->next;
        }
        
        // if(temp->next == NULL){
        //         printf(" |(END OF QUEUE)\n");
        // }
    }
}