#include <stdio.h>
#include <stdlib.h>

typedef struct introTree {
    int data;
    struct introTree *left;
    struct introTree *right;
} tree;

tree *createChild(int data) {
    tree *newChild = (tree *)malloc(sizeof(tree));
    if (newChild == NULL) {
        printf("Memmory NOt allocated..\n");
        exit(1);
    }
    newChild->data = data;
    newChild->left = NULL;
    newChild->right = NULL;
    return newChild;
}

tree *insertData(tree *root, int num) {
    if (root == NULL) {
        return createChild(num);
    }

    if (num < root->data) {
        root->left = insertData(root->left, num);
    } else {
        root->right = insertData(root->right, num);
    }

    return root;
}

void dataDisplayInOrder(tree *node) {
    if (node == NULL) {
        return;
    }
    dataDisplayInOrder(node->left);
    printf("%d\t", node->data);
    dataDisplayInOrder(node->right);
}

void dataDisplayPreOrder(tree *node) {
    if (node == NULL) {
        return;
    }
     printf("%d\t", node->data);
    dataDisplayInOrder(node->left);
    dataDisplayInOrder(node->right);
}

void dataDisplayPostOrder(tree *node) {
    if (node == NULL) {
        return;
    }
     
    dataDisplayInOrder(node->left);
    dataDisplayInOrder(node->right);
    printf("%d\t", node->data);
}
int main() {
    int key;
    tree *root = NULL; 
    printf("HOW MANY YOU WANT TO STORE: ");
    scanf("%d", &key);

    for (int i = 0; i < key; i++) {
        int num;
        printf("Enter the key what you want to store: ");
        scanf("%d", &num);
        root = insertData(root, num);
    }

    printf("In-order :\n");
    dataDisplayInOrder(root);
    dataDisplayPreOrder(root);
    dataDisplayPostOrder(root);
    printf("\n");

    return 0;
}
