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

/*CRIA UM NOVO ELEMENTO DO TIPO STRUCT NODE*/
Node *elementCreator(char str[]);
/*CRIA A LIGAÇÃO DA ÁRVORE BINÁRIA*/
Node *tree(Node *root, Node *element);
/*EXIBIÇÃO NO CONSOLE DAS PALAVRAS ORDENADAS PELO CÓDIGO*/
void printInOrder(Node *root);


/*CRIAÇÃO DA ÁRVORE BINÁRIA A PARTIR DAS PALAVRAS ARMAZENADAS NO ARQUIVO TXT*/
Node *treeCreator_wordsArchive(Node *root);


/*ALTURA DA ÁRVORE*/
int treeHeight(Node *root);
/*QUANTIDADE DE PALAVRAS SEM REPETIÇÃO*/
int wordsQuantity(Node *root);
/*QUANTIDADE DE FOLHAS DA ÁRVORE*/
int leaveQuantity(Node *root);
/*QUANTIDADE TOTAL DE PALAVRAS*/
int ocurrenceTotalQuantity(Node *root);
/*QIANTIDADE TOTAL DE CARACTERES*/
int characteresQuantity(Node *root);

#endif