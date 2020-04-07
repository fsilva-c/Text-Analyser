#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "binary_tree.h"

int main(){
    Node *nod = NULL;

    nod->left = nod->right = NULL;
    strcpy(nod->info, "Ola!");
    puts("Hello Wolrd!");

    printf("%s", nod->info);
}//END main