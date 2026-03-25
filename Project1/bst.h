#pragma once
#ifndef BST_H
#define BST_H

typedef struct Node {
    char data;
    struct Node* left;
    struct Node* right;
} Node;

// Function prototypes
Node* insert(Node* root, char data);
Node* search(Node* root, char data);
int countNodes(Node* root);
int treeHeight(Node* root);
void inOrder(Node* root); // for sorted output

#endif