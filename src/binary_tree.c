#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>

#define BOOK_PATH "/home/qwerty/Documents/multilanguage/word_analizer/books/wordlist-big-latest.txt"

#include "binary_tree.h"
#include "str_manipulation.h"

Node *elementCreator(char str[]){
    Node *new = (Node*)malloc(sizeof(Node));
    if(new == NULL) exit(EXIT_FAILURE);

    strLower(str);
    strTratament(str);

    new->left = new->right = NULL;
    new->code = codGenerator(str);
    new->ocurrenceInTheText = 1;
    new->wordSize = strlen(str);
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
        else if(root->code < element->code)
            root->right = tree(root->right, element);
        else
            root->ocurrenceInTheText++;
    }

    return root;    
}//END function

void printInOrder(Node *root){
    if(root == NULL)
        return;
    
    printInOrder(root->left);
    printf("Código: [%d] || Palavra: [%s] || Ocorrências: [%d] || Tamanho: [%d]\n", root->code, root->info, root->ocurrenceInTheText, root->wordSize);
    printInOrder(root->right);
}//END funtion

Node *treeCreator_wordsArchive(Node *root){
    FILE *pArchive = fopen(BOOK_PATH, "r");
    if(pArchive == NULL){
        puts("Falha na abertura do arquivo, tente novamente.");
        exit(EXIT_FAILURE);
    }

    char word[WORD_SIZE];
    while(fscanf(pArchive, "%s", word) != EOF){
        Node *new = elementCreator(word);
        root = tree(root, new);
    }
    fclose(pArchive);

    return root;
}//END function

int treeHeight(Node *root){
    if(root == NULL)
        return -1;
    else{
        int leftSize = treeHeight(root->left);
        int rightSize = treeHeight(root->right);
        
        if(leftSize < rightSize) 
            return rightSize + 1;
        else
            return leftSize + 1;
    }
}//END function

int wordsQuantity(Node *root){
    if(root == NULL)
        return 0;
    else
        return 1 + wordsQuantity(root->left) + wordsQuantity(root->right);
}//END function

int leaveQuantity(Node *root){
    if(root == NULL)
        return 0;
   if(root->left == NULL && root->right == NULL)
        return 1;

   return leaveQuantity(root->left) + leaveQuantity(root->right);
}//END function

int ocurrenceTotalQuantity(Node *root){
    int sumOcurrences = 0;

    if(root == NULL)
        return 0;
    
    if(root != NULL)
        return sumOcurrences = root->ocurrenceInTheText + ocurrenceTotalQuantity(root->left) + ocurrenceTotalQuantity(root->right);

    return sumOcurrences;
}//END function

int characteresQuantity(Node *root){
    int sumCharacteres = 0;

    if(root == NULL)
        return 0;
    
    if(root != NULL)
        return sumCharacteres = root->wordSize + characteresQuantity(root->left) + characteresQuantity(root->right);

    return sumCharacteres;
}//END function