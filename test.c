#include<stdlib.h>
#include<stdio.h>
// #include <stddef.h>
struct node{
    int data;
    struct node* next;
};
int main(){
    struct node *head , *second , *third;
    
    head = (struct node *)malloc(sizeof(struct node));
  head = NULL;
// if(head->next== NULL)
// printf("hello world");
// else
//  printf("wrong");
printf("%d",head->next);
    return 0;
}