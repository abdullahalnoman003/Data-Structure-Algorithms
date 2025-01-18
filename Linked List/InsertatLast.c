#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    int n, value;
    struct Node *head = NULL, *temp = NULL, *newNode = NULL;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        newNode = (struct Node*) malloc(sizeof(struct Node));
        printf("Enter element %d: ", i + 1);
        scanf("%d", &value);
        newNode->data = value;
        newNode->next = NULL;
        if (head == NULL) {
            head = newNode;
            temp = head;
        } else {
            temp->next = newNode;
            temp = temp->next;
        }
    }
    newNode = (struct Node*) malloc(sizeof(struct Node));
    printf("Enter element to insert at end: ");
    scanf("%d", &value);
    newNode->data = value;
    newNode->next = NULL;
    temp->next = newNode;

    temp = head;
    printf("Linked list elements: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
    return 0;
}
