/**
 * @file DEV_031_InsertNode.c
 * @author HyperMechatronics
 * @brief insert a node at beginning of linked list
 * @version 0.1
 * @date 2022-01-30
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* link;
};

struct Node* insertNodeAtBeginning(struct Node* head, int data) {
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
    return head;
}

void printList(struct Node* head) {
    if (head == NULL) {
        printf("Head is NULL");
    }
    else {
        struct Node* printPtr = head;
        while (printPtr != NULL) {
            printf("Address: %d\tData: %d\tLink: %d\n", printPtr, printPtr->data, printPtr->link);
            printPtr = printPtr->link;
        }
    }
}

int main() {
    struct Node* head = NULL;
    head = insertNodeAtBeginning(head, 2);
    head = insertNodeAtBeginning(head, 1);
    printList(head);
    return 0;
}