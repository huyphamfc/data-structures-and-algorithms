#include <stdio.h>
#include <stdlib.h>

// define Node structure
struct Node {
    int data;
    struct Node* link;
};

int main() {
    // Size of Node
    //printf("Size of Node: %d\n", sizeof(struct Node));
    //printf("\n");

    // Create a Node pointer to head node
    struct Node* P = NULL;
    printf("Initialize address of pointer P: %d\n", &P);
    printf("Address of pointer P: %d\n", P);
    printf("Size of pointer P: %d\n", sizeof(P));
    printf("\n");

    // Create a new node
    struct Node* currentNode = (struct Node*)malloc(sizeof(struct Node));
    printf("Initialize address of Node: %d\n", currentNode);
    currentNode->data = 2;
    currentNode->link = NULL;
    printf("Size of Node: %d\n", sizeof(currentNode));
    printf("Size of data: %d\n", sizeof(currentNode->data));
    printf("Size of link: %d\n", sizeof(currentNode->link));
    printf("\n");

    // Assign pointer P to head node
    P = currentNode;
    printf("Address of pointer P: %d\n", P);
    printf("Size of data: %d\n", sizeof(P->data));
    printf("Size of link: %d\n", sizeof(P->link));
    return 0;
}
