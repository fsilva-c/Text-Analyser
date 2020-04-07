#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "binary_tree.h"

int main(){
    Node *root = NULL;

    puts("Plantando a arvore!");
    root = treeCreator_wordsArchive(root);

    printInOrder(root);
    printf("\n");

    return 0;
}//END main