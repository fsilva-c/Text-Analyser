#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "binary_tree.h"

int main(){
    Node *root = NULL;

    Node *new_0 = elementCreator("chevrolet");
    Node *new_1 = elementCreator("margarina");

    root = tree(root, new_0);
    root = tree(root, new_1);

    printInOrder(root);
    printf("\n");

    return 0;
}//END main