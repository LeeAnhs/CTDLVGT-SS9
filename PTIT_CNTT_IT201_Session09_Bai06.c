#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
} Node;
Node* createNode(int data) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    return node;
}
Node* removeNodeHead(Node* head, int data) {
    if (head == NULL) {
        return NULL;
    }
    Node* temp = head;
    head = head->next;
    free(temp); 
    return head;
}
int main(){
    Node* head =createNode(10);
    Node* node2 = createNode(20);
    Node* node3 = createNode(30);
    Node* node4 = createNode(40);
    Node* node5 = createNode(50);

    head->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = NULL;
    int input;
    printf("Nhap gia tri can them vao dau danh sach: ");
    scanf("%d", &input);
    head = addNodeAtHead(head, input);
    Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    return 0;
}
