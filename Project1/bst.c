#include <stdio.h>
#include <stdlib.h>
#include "bst.h"


Node* insert(Node* root, char data)
{
    if (!root)
    {
        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode->data = data;
        newNode->left = newNode->right = NULL;
        return newNode;
    }

    if (data < root->data)
        root->left = insert(root->left, data);
    else
        root->right = insert(root->right, data);

    return root;
}


Node* search(Node* root, char data)
{
    if (!root || root->data == data)
        return root;

    if (data < root->data)
        return search(root->left, data);
    else
        return search(root->right, data);
}

// Count nodes
int countNodes(Node* root)
{
    if (!root) return 0;
        

    return 1 + countNodes(root->left) + countNodes(root->right);
}

// Tree height
int treeHeight(Node* root)
{
    if (root == NULL) return 0; 

    int leftHeight = treeHeight(root->left);
    int rightHeight = treeHeight(root->right);

    return 1 + (leftHeight > rightHeight ? leftHeight : rightHeight);
}


void inOrder(Node* root)
{
    if (!root)
    {
        inOrder(root->left);
        printf("%c ", root->data);
        inOrder(root->right);
    }
}