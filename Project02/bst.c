#include <stdio.h>
#include <stdlib.h>
#include "bst.h"


typedef struct node
{
	int key;	//stores node's key/value
	struct node* left;	//points to left node
	struct node* right;	//points to right node
}node;


void insert(int num)
{
	node *n = (node*)malloc(sizeof(node));
	n->key = num;
	n->left = NULL;
	n->right = NULL;

	if (num < n->key)
	{
		add(&n->left, num);
	}
	else
	{
		add(&n->right, num);
	}
}

int search(node *central, int value)
{
	while (central != NULL)
	{
		if (value > central->key)
		{
			return search(central->right, value);
		}
		else if (value < central->key)
		{
			return search(central->left, value);
		}
		else
		{
			return;
		}
	}
}

void traverse(node* node)
{
	//check leftmost node
	//check right node
	//check central node
	//repeat & print

	if (node == NULL)	//if the node doesn't exist
	{
		return;
	}

	if (node->left)	//if left node does exist
	{
		traverse(node->left);
	}

	int num = node->key;
	char buff[10];
	sprintf(buff, "%d", num);		//print node

	if (node->right)	//if right node does exist
	{
		traverse(node->right);
	}
	
}