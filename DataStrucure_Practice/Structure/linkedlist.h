#include <stdio.h>
#include <stdlib.h>

#include "node.h"

// struct linkedlist{


    void initiNode(Node *pN){
        printf("\nEnter the new node name:\n");
        scanf("%s", pN->data.name);
        printf("new node name : %s\n", pN->data.name);
    }

    void addNode(Node *pN_prev, Node *pN_next){
        pN_prev->next = pN_next;
        pN_next->prev = pN_prev;
    }

    void deleteNode(Node *pN){
        (pN->next)->prev = pN->prev;
        (pN->prev)->next = pN->next;
        
        if(pN != NULL) free(pN);
    }

    void showNode(Node *pN){
        printf("%s has data array[%d, %d, %d, %d, %d], previous node is %s, next node is %s\n"
            , pN->data.name, pN->data.attribute[0], pN->data.attribute[1],  pN->data.attribute[2],  pN->data.attribute[3],  pN->data.attribute[4]
            , pN->prev->data.name, pN->next->data.name);
    }

// } LinkedList;