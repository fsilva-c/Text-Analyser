#ifndef BINARY_TREE
#define BINARY_TREE

typedef struct node{
    char info[50];
    struct node *left, *right;
}Node;

void print();

#endif