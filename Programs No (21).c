/* Write a C program to create a linked list and display the elements in the list.*/

	#include <stdio.h>
	#include <alloc.h>
	#include <stdlib.h>

	void main()
	{
		struct node
		{
			int num;
			struct node *ptr;
		};

		typedef struct node NODE;

		NODE *head, *first, *temp=0;
		int count = 0;
		int choice = 1;
		first = 0;
		
		while(choice)
		{
			head =(NODE*) malloc(sizeof(NODE));
			printf("Enter the data item\n");
			scanf("%d", &head-> num);

			if(first != 0)
			{
				temp->ptr = head;
				temp = head;
			}
			else
			{
				first = temp = head;
			}
			fflush(stdin);
			printf("Do you want to continue(Type 0 or 1)?\n");
			scanf("%d", &choice);

		}         /* End of while */

		temp->ptr = 0;
		temp = first;		/* reset temp to the beginning*/
		printf("\nstatus of the linked list is\n");
		
		while(temp!=0)
		{
			printf("%d=>", temp->num);
			count++;
			temp = temp -> ptr;
		}
		printf("NULL\n");
		printf("No. of nodes in the list = %d\n", count);
	}		/* End of main*/

/*-----------------------------------------------
Output
Enter the data item
10
Do you want to continue(Type 0 or 1)?
1
Enter the data item
34
Do you want to continue(Type 0 or 1)?
1
Enter the data item
56
Do you want to continue(Type 0 or 1)?
0

status of the linked list is
10=>34=>56=>NULL
No. of nodes in the list = 3
----------------------------------------------*/