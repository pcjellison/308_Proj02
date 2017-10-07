#include "io.h"
#include "bst.h"
#include <stdio.h>
#include <stdlib.h>


char display()
{
	char choice;
	printf_s("Enter (i)nsert, (s)earch, inorder (t)raversal, or (q): \n");
	scanf_s("%c", &choice);
	if (choice == 'i' || choice == 'I')
	{
		return 'i';
	}
	else if (choice == 's' || choice == 'S')
	{
		return 's';
	}
	else if (choice == 't' || choice == 'T')
	{
		return 't';
	}
	else if (choice == 'q' || choice == 'Q')
	{
		return 'q';
	}
}
int insertOption()
{
	int num = 0;
	printf_s("Enter a number to insert: \n");
	scanf_s("%d", &num);
	return num;
}

int searchOption()
{
	int searchNum = 0;
	printf_s("Enter a number to search for: ");
	scanf_s("%d", &searchNum);
	return searchNum;
}

void searchReturn(int searchResult, int nodeKey)
{
	if (searchResult == 1)
	{
		printf_s("%d is in the tree\n", nodeKey);
	}
	else
	{
		printf_s("%d is not in the tree\n", nodeKey);
	}
}

void inorderOption(char str)
{
	printf(str);
}