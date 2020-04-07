#include <stdio.h>
#include <unistd.h>

#include "binary_tree.h"
#include "str_manipulation.h"

int main(){
    Node *root = NULL;

    puts("Plantando a arvore!");
    root = treeCreator_wordsArchive(root);

    printInOrder(root);
    printf("\n");

    printf("Altura da árvore: [%d]\n", treeHeight(root));
    printf("Quantidade de palavras(sem repetição): [%d]\n", wordsQuantity(root));

    return 0;
}//END main