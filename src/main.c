#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "binary_tree.h"
#include "str_manipulation.h"

int main(){
    Node *root = NULL;

    puts("Plantando a arvore!");
    root = treeCreator_wordsArchive(root);

    printInOrder(root);
    printf("\n\n");

    strTratament("x");
    printf("\n\n");

    printf("%s\n", A_TO_Z);

    return 0;
}//END main