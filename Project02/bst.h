#ifndef BST_H
#define BST_H

typedef struct node;
struct node* insert(struct node* newNode, int num);
int search(struct node* central, int value);
char* traverse(struct node* node);

#endif