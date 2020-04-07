#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "binary_tree.h"

int codGenerator(char str[]){
    int sizeStr = strlen(str);
    int counter = 0;

    for(int i = 0; i < sizeStr; i++){
        counter += str[i];
    }

    return counter;
}//END function

Node *elementCreator(char str[]){
    Node *new = (Node*)malloc(sizeof(Node));
    if(new == NULL) exit(EXIT_FAILURE);

    new->left = new->right = NULL;
    new->code = codGenerator(str);
    strcpy(new->info, str);

    return new;
}//END function

Node *tree(Node *root, Node *element){
    if(root == NULL){
        root = elementCreator(element->info);

        return root;
    }
    else{
        if(root->code > element->code)
            root->left = tree(root->left, element);
        else
            root->right = tree(root->right, element);
    }

    return root;    
}//END function

void printInOrder(Node *root){
    if(root == NULL)
        return;
    
    printInOrder(root->left);
    printf("[%d] [%s]\n", root->code, root->info);
    printInOrder(root->right);
}//END funtion

Node *treeCreator_wordsArchive(Node *root){
    FILE *pArchive = fopen("/home/qwerty/Documents/multilanguage/word_analizer/books/test.txt", "r");
    if(pArchive == NULL){
        puts("Falha na abertura do arquivo, tente novamente.");
        exit(EXIT_FAILURE);
    }

    char word[20];
    while(fscanf(pArchive, "%s", word) != EOF){
        Node *new = elementCreator(word);
        root = tree(root, new);
    }
    fclose(pArchive);

    return root;
}//END function