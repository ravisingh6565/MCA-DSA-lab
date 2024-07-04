#include<stdio.h>
#include<stdlib.h>
typedef struct  tree
{
    int data;
    struct tree* left;
    struct tree* right;

}tree;

tree* createChild(int key){
    tree* nn = (tree*)malloc(sizeof(tree));
    if (nn ==NULL)
    {
        printf("memmory not allocated");
        exit(1);
    }
    nn->left = NULL;
    nn->data = key;
    nn->right = NULL;
    return nn;
    
}

tree* insertData(tree* root , int key){
    if(root==NULL){
        return createChild(key);
    }
    if(key<root->data){
        root->left = insertData(root->left,key);
    }
    if(key>root->data){
        root->right = insertData(root->right , key);
    }

    return root;
}

void DisplayInorder(tree* root){
        if(root ==NULL){
            return ;
        }
        DisplayInorder(root->left);
        printf("%d\t",root->data);
        DisplayInorder(root->right);
}
int main(){

    int num;
    tree* root = NULL;
    printf("how many number you want to insert : ");
     scanf("%d",&num);
     for(int i=0;i<num;i++){
        int key;
        printf("enter the key what you want to store : ");
        scanf("%d",&key);
        root = insertData(root,key);
        
     }
     printf("display in inorder");
        DisplayInorder(root);
}