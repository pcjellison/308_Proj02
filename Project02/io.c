#include "io.h"
#include "bst.h"
#include <stdio.h>
#include <stdlib.h>


int display()
{
	int correctInput = 0;		//correct input is false
	char choice;
	while (correctInput == 0)
	{
		printf_s("Enter (i)nsert, (s)earch, inorder (t)raversal, or (q): \n");
		scanf_s("%c", &choice);
		if (choice == 'i' || choice == 'I')
		{
			insertOption();
			correctInput = 1;
		}
		else if (choice == 's' || choice == 'S')
		{
			searchOption();
			correctInput = 1;
		}
		else if (choice == 't' || choice == 'T')
		{
			inorderOption();
			correctInput = 1;

		}
		else if (choice == 'q' || choice == 'Q')
		{
			quitOption();
			correctInput = 1;
		}
	}

}
void insertOption()
{
	int num;
	printf_s("Enter a number to insert: \n");
	scanf_s("%d", num);
	insert(num);
}

void searchOption()
{
	int searchNum;
	printf_s("Enter a number to search for: ");
	scanf_s("%d", searchNum);
	search(searchNum);
}

void inorderOption()
{
	//print results of traverse
}

void quitOption()
{
	getchar();
}