#include <stdio.h>
#include "bst.h"
#include "io.h"

int main()
{
	char choice = 'a';
	int nodeKey = 0;
	struct node* top = NULL;

	while (choice != 'c')
	{
		choice = display();
		if (choice == 'i')
		{
			nodeKey = insertOption();
			top = insert(top, nodeKey);
			choice = 'a';
			nodeKey = 0;
		}
		else if (choice == 's')
		{
			nodeKey = searchOption();
			int searchResult = search(top, nodeKey);
			searchReturn(searchResult, nodeKey);
			choice = 'a';
			nodeKey = 0;
		}
		else if (choice == 't')
		{
			inorderOption(traverse(top));
			choice = 'a';
			nodeKey = 0;
		}
		else if (choice == 'q')
		{
			getchar();
			free(top);
			choice = 'c';
			nodeKey = 0;
		}
	}
}