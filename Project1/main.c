#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bst.h"

int main()
{
    Node* root = NULL;

    srand(time(NULL));

    
    int n = rand() % 10 + 11;

    printf("Inserting %d characters:\n", n);

    for (int i = 0; i < n; i++)
    {
        char c = 'a' + rand() % 26;
        printf("%c ", c);
        root = insert(root, c);
    }

    printf("\n\nSorting characters in alphabetical order:\n");
    inOrder(root);

    printf("\n\nNumber of nodes: %d\n", countNodes(root));
    printf("Tree height: %d\n", treeHeight(root));

    return 0;
}