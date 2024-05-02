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
        printf("linkedList is emptyyy");
        return ptr;
    }else{

            struct node* newNode = (struct node*)malloc(sizeof(struct node));
            newNode->data = 100;
            newNode->next = ptr;
            return newNode;
    }
    
    }

struct node* insertBychoise(struct node* ptr ,int pos){
    struct node* start = ptr;
    if(pos==1){
        struct node *newhead= (struct node*)malloc(sizeof(struct node));
        newhead = insertAtBegining(ptr);
        return newhead;
    }
    while(pos>0){
            if(ptr==NULL || pos >0){
                break;
            }
            ptr=ptr->next;
            pos--;
            
    }
    if(pos<=0) printf("the length of the string is much shorter%d",pos);
    else {
        int n ;
        printf("enter the the number you want to enter");
        scanf("%d",&n);
        struct node* newNode=(struct node*)malloc(sizeof(struct node));
        newNode->next= ptr->next;
        ptr->next = newNode;
        newNode->data = n;
        // ptr->next = newNode;
        // newNode->next = NULL;
        // newNode->data = n;
    }
    return start;
}

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
    int n;
    printf("Enter the position: ");
    scanf("%d",&n);
     head = insertBychoise(head,n);
        linkedListTraversal(head);
        // check(fourth);

    return 0;
}