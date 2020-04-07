#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
    int code;
    char info[50];
    struct node *left, *right;
}Node;

int codGenerator(char str[]);
Node *elementCreator(char str[]);
Node *tree(Node *root, Node *element);
void printInOrder(Node *root);

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
    printf("[%d] ", root->code);
    printInOrder(root->right);
}//END funtion