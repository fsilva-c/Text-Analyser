#ifndef BINARY_TREE
#define BINARY_TREE

#define WORD_SIZE 50

typedef struct node{
    int code;
    int wordSize;
    int ocurrenceInTheText;
    char info[WORD_SIZE];
    struct node *left, *right;
}Node;

int codGenerator(char str[]);

Node *elementCreator(char str[]);
Node *tree(Node *root, Node *element);
void printInOrder(Node *root);

Node *treeCreator_wordsArchive(Node *root);

#endif