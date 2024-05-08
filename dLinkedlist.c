#include<stdio.h>
#include<stdlib.h>

typedef struct DlinkedList{
    struct DlinkedList* prev;
    int data;
    struct DlinkedList* next;
} node;

void insertAtEnd(node** head, int data) {
    node* newNode = (node*)malloc(sizeof(node));
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) { 
        newNode->prev = NULL;
        *head = newNode;
        return;
    }

    node* temp = *head;
    while (temp->next != NULL) { 
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

void display(node* ptr) {
    while(ptr != NULL) {
        printf("%d \t", ptr->data);
        ptr = ptr->next;
    }
}

int main() {
    int n;
    node* start = NULL;

    printf("how many nodes do you want to insert: ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        int data;
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);
        insertAtEnd(&start, data);
    }

    printf("\nList: ");
    display(start);

    return 0;
}
