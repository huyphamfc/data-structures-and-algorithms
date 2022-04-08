#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* link;
};

struct Node* head = NULL;

void printList() {
    if (head == NULL) {
        printf("List is empty");
    }
    else {
        struct Node* printPtr = head;
        while (printPtr != NULL) {
            printf("Address: %d\tData: %d\tLink: %d\n", printPtr, printPtr->data, printPtr->link);
            printPtr = printPtr->link;
        }
    }
}

void insertNode(int data, int position) {
    if (position == 1) {
        if (head == NULL) {
            head = (struct Node*)malloc(sizeof(struct Node));
            head->data = data;
            head->link = NULL;
        }
        else {
            struct Node* createNode = (struct Node*)malloc(sizeof(struct Node));
            createNode->data = data;
            createNode->link = head;
            head = createNode;
        }
    }
    else {
        struct Node* temp = head;
        int count = 2;
        while (count < position) {
            temp = temp->link;
            count++;
        }
        struct Node* createNode = (struct Node*)malloc(sizeof(struct Node));
        createNode->data = data;
        createNode->link = temp->link;
        temp->link = createNode;
    }
}

int main() {
    insertNode(1, 1);
    insertNode(2, 2);
    insertNode(3, 3);
    insertNode(4, 4);
    insertNode(5, 5);

    // insertNode(5, 1);
    // insertNode(4, 1);
    // insertNode(3, 1);
    // insertNode(2, 1);
    // insertNode(1, 1);

    insertNode(0, 6);
    printList();
    return 0;
}