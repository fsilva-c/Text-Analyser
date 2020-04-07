#ifndef BINARY_TREE
#define BINARY_TREE

typedef struct node{
    int code;
    int wordSize;
    int ocurrenceInTheText;
    char info[50];
    struct node *left, *right;
}Node;

int codGenerator(char str[]);

Node *elementCreator(char str[]);
Node *tree(Node *root, Node *element);
void printInOrder(Node *root);

Node *treeCreator_wordsArchive(Node *root);

#endif