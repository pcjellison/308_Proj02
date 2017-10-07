#include <stdio.h>
#include <stdlib.h>
#include "bst.h"


typedef struct node
{
	int key;	//stores node's key/value
	struct node *left;	//points to left node
	struct node *right;	//points to right node
}node;


struct node* insert(struct node *newNode, int num)
{
	if (newNode == NULL)
	{
		newNode = malloc(sizeof(struct node));
		newNode->key = num;
		newNode->left = NULL;
		newNode->right = NULL;
		return newNode;
	}
	if (num < newNode->key)
	{
		newNode->left = insert(newNode->left, num);
	}
	else if (num > newNode->key)
	{
		newNode->right = insert(newNode->right, num);
	}
	return newNode;
}

int search(struct node* central, int value)
{
	if (central->key == value)
	{
		return 1;
	}
	else if (central == NULL)
	{
		return 0;
	}
	
	if (central->key < value)
	{
		search(central->right, value);
	}
	else
	{
		search(central->left, value);
	}
}

char* traverse(struct node* node)
{
	char buff[100];
	int i = 0;
	if (node != NULL)
	{
		traverse(node->left);
		sprintf_s((buff+i), 100, "%d ", node->key);
		i+=2;
		traverse(node->right);
	}
	return buff;
}