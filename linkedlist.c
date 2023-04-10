#include <stdio.h>
#include <stdlib.h>
  
struct Node {
    int data;
    struct Node* next;
};
  
// This function prints contents of linked list starting
// from the given node
void printList(struct Node* n)
{
    while (n != NULL) {
        printf(" %d ", n->data);
        n = n->next;
    }
}

void main()
{
    struct Node* Head = NULL;
    struct Node* Second = NULL;
    struct Node* Third = NULL;

    Head = (struct Node*)malloc(sizeof(struct Node));
    Second = (struct Node*)malloc(sizeof(struct Node));
    Third = (struct Node*)malloc(sizeof(struct Node));

    Head->data = 1;
    Head->next = Second;

    Second->data = 2;
    Second->next = Third;

    Third->data = 3;
    Third->next = NULL;

    printList(Head);
}