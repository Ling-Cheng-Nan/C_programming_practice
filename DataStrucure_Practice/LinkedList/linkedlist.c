#include "linkedlist.h"

int main(void){

    Node* pHead = NULL;
    Node* pTail = NULL;

    
    Node node1 = { {"p1", {1, 2, 3, 4, 5}}, NULL, NULL};
    Node node2 = { {"p2", {9, 8, 7, 6, 5}}, NULL, NULL};
    // Node node3 = { {"p3", {4, 9, 3, 1, 2}}, NULL, NULL};
    // Node node4 = { {"p4", {9, 9, 4, 0, 8}}, NULL, NULL};

    Node *pN1 = &node1;
    Node *pN2 = &node2;
    // Node *pN3 = &node3;
    // Node *pN4 = &node4;

    initiNode(pN1);

    addNode(pN1, pN2);
    // addNode(pN2, pN3);
    // addNode(pN3, pN4);

    
    showNode(pN1);
    showNode(pN2);
    // showNode(pN3);
    // showNode(pN4);


    // deleteNode(pN2);
    // deleteNode(pN3);
    

    // showNode(pN1);
    // showNode(pN2);
    // showNode(pN3);
    // showNode(pN4);

    return 0;
}
