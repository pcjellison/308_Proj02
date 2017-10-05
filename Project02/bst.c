#include <stdio.h>
#include <stdlib.h>
#include "bst.h"


typedef struct node
{
	int key;	//stores node's key/value
	struct node* left;	//points to left node
	struct node* right;	//points to right node
}node;

node* insert(int key)
{
	node *newNode = (node*)malloc(sizeof(node));

	if (newNode == NULL)
	{

	}

	newNode->key = key;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}

void search()
{

}

void traverse()
{
	//check leftmost node
	//check right node
	//check central node
	//repeat
}