#define DIMENSION_SIZE 5

typedef struct node Node;
typedef struct data Data;

typedef struct data{
    char name[10];
    int  attribute[DIMENSION_SIZE];
} Data;

typedef struct node{
    
    Data  data;
    Node *prev;
    Node *next;

} Node;
