#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;  
} Node;

Node* createNode(int data) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    return node;
}
void displayList(Node* head) {
    Node* current = head;
    int index = 1;
    while (current != NULL) {
        printf("Node %d: %d", index, current->data);
        current = current->next;
        if (current != NULL) {
            printf(", ");
        }
        index++;
    }
    printf("\n");
}
int main() {
    Node* head = createNode(10);
    Node* node2 = createNode(20);
    Node* node3 = createNode(30);
    Node* node4 = createNode(40);
    Node* node5 = createNode(50);

    head->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = NULL;

    displayList(head);

    return 0;
}
