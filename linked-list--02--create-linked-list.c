#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* link;
};

struct Node* createNode(struct Node* head, int data) {
    if (head == NULL) {
        head = (struct Node*)malloc(sizeof(struct Node));
        head->data = data;
        head->link = NULL;
        return head;
    }
    else {
        struct Node* createNode = head;
        struct Node* temp;
        while (createNode != NULL) {
            temp = createNode;
            createNode = createNode->link;
        }
        createNode = (struct Node*)malloc(sizeof(struct Node));
        createNode->data = data;
        createNode->link = NULL;
        temp->link = createNode;
        return createNode;
    }
}

void printList(struct Node* head) {
    if (head == NULL) {
        printf("List is empty");
    }
    else {
        struct Node* printPtr = head;
        while (printPtr != NULL) {
            printf("Node address: %d\tData: %d\tLink: %d\n", printPtr, printPtr->data, printPtr->link);
            printPtr = printPtr->link;
        }
    }
}

int main() {
    struct Node* head = NULL;
    struct Node* node = NULL;

    head = createNode(head, 1);
    node = createNode(head, 2);
    node = createNode(head, 3);
    node = createNode(head, 4);
    node = createNode(head, 5);

    printList(head);
    return 0;
}