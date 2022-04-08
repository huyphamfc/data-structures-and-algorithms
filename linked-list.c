#include <stdio.h>
#include <stdlib.h>

// define Node structure
struct Node {
    int data; // store the value
    struct Node* link; // store the address of the next node
};

int main() {
    // create a pointer to head node
    struct Node* P;
    P = NULL; // list is empty
    printf("Initialize address of P:%d\n",&P);
    printf("Address of P: %d\n",P);
    printf("\n");

    // create a memory block to store a new node
    struct Node* temp;
    temp = (struct Node*)malloc(sizeof(struct Node));

    // access fields
    temp->data = 2; // ~ temp->data = 2; de-reference & write value into new node
    temp->link = NULL; // ~ temp->link = NULL; de-reference & write value into new node

    P = temp;
    printf("Address of P: %d\n",P);
    printf("Value of P: %d\n",P->data);
    printf("Link of P: %d\n",P->link);
    printf("Address of temp: %d\n",temp);
    printf("Value of temp: %d\n",temp->data);
    printf("Link of temp: %d\n",temp->link);
    printf("\n");

    // create a memory block to store a new node (second node)
    temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = 4;
    temp->link = NULL;
    printf("Address of P: %d\n",P);
    printf("Value of P: %d\n",P->data);
    printf("Link of P: %d\n",P->link);
    printf("Address of temp: %d\n",temp);
    printf("Value of temp: %d\n",temp->data);
    printf("Link of temp: %d\n",temp->link);
    printf("\n");

    // create a memory block to store a new node (last node)
    temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = 6;
    temp->link = NULL;
    printf("Address of P: %d\n",P);
    printf("Value of P: %d\n",P->data);
    printf("Link of P: %d\n",P->link);
    printf("Address of temp: %d\n",temp);
    printf("Value of temp: %d\n",temp->data);
    printf("Link of temp: %d\n",temp->link);

    return 0;
}
