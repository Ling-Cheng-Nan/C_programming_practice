#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 5

typedef struct node Node;
typedef struct stack Stack;

struct node{
    struct node* pre;
    int data;
};

struct stack{ 
    struct node* top;
    int count;
};

/*function prototype*/
int ask_for_options();
void init_stack(Stack* );
void push(Stack*, int);
int pop(Stack* );
void display(Stack* );

int main(){
    int option, value;
    int extract_value;
    Stack stack;
    Stack* ptr = &stack;
    
    init_stack(ptr);

    while(option != 4){

        switch (ask_for_options()){
            case 1:
                /* push */
                printf("Enter the value you want to push into the stack : \n");
                scanf("%d", &value);
                push(ptr, value);
                printf("After insertion into top of the stack : \n");
                display(ptr);
                break;
            case 2:
                /* pop */
                extract_value = pop(ptr);
                printf("pop out from top of the stack : %d \n", extract_value);
                display(ptr);
                break;
            case 3:
                /* show elements in stack */
                printf("The elements extracted from top of Stack are : \n");
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



    return 0 ;
}

int ask_for_options(){

    int opt;

    printf("\nStack Operations : \n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
    printf("====================\n");
    scanf("%d", &opt);

    return opt;
}

void init_stack(Stack* st){
    st->top = NULL;
    st->count = 0;
}

void push(Stack* st, int val){

    /*check the stack is full or not*/
    if(st->count == STACK_SIZE){
        printf("Stack is full.\n");
    }else{
        Node* temp = malloc(sizeof(Node *));
        
        temp->data = val;
        temp->pre = st->top;
        st->top = temp;

        st->count ++;
        // printf("Stack count increase.\n");
    }

}


int pop(Stack* st){

    int extract_value = 0;

    /*check the stack is empty or not*/
    if(st->count == 0){
        printf("Stack is empty! Cannot pop out any element.\n");
    }
    else{
        /*extract element on top of the stack*/
        Node* temp;
        
        temp = st->top;
        extract_value = temp->data;
        st->top = (st->top)->pre;        
        
        free(temp);
        
        st->count --;
        printf("Stack count decrease.\n");
    }

    return extract_value;
}

void display(Stack* st){

    Node* temp = st->top;
    while(temp != NULL){
        if(temp->pre == NULL){
            printf("%d ", temp->data);
        }else{
            printf("%d -> ", temp->data);
        }

        temp = temp->pre;
    }
}

