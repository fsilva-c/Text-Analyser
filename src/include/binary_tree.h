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

Node *elementCreator(char str[]);
Node *tree(Node *root, Node *element);
void printInOrder(Node *root);

Node *treeCreator_wordsArchive(Node *root);

int treeHeight(Node *root);
int wordsQuantity(Node *root);
int leaveQuantity(Node *root);

#endif