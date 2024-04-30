#include<stdlib.h>
#include<stdio.h>
struct node{
    int data;
    struct node* next;
};
    void linkedListTraversal(struct node * ptr ){
        while(ptr!=NULL){
            printf("Elemennt: %d\n",ptr->data);
            ptr = ptr->next;
     }
    }

    struct node* insertAtBegining(struct node* ptr){
    if(ptr==NULL){
        printf("linkedList is empty");
        return ptr;
    }else{

            struct node* newNode = (struct node*)malloc(sizeof(struct node));
            newNode->data = 100;
            newNode->next = ptr;
            return newNode;
    }
    
    }

void insertBychoise()
int main(){
    struct node *head , *second , *third;
    
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    struct node *fourth = (struct node*)malloc(sizeof(struct node));
//   struct node *ptr = head;

    head->data = 1;
    head->next = second;

    second->data =2;
    second->next = third;

    third->data =3;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = NULL;

    //  head = insertAtBegining(head);
        insertBychoise(head ,3);
        linkedListTraversal(head);

    return 0;
}