/* Write a C program to find the sum of two one-dimensional arrays using    *
 * Dynamic Memory Allocation                                                */

#include <stdio.h>
#include <alloc.h>
#include <stdlib.h>

void main()
{
	int i,n;
	int *a,*b,*c;

	printf("How many Elements in each array...\n");
	scanf("%d", &n);

	a = (int *) malloc(n*sizeof(int));
	b = (int *) malloc(n*sizeof(int));
	c =( int *) malloc(n*sizeof(int));

	printf("Enter Elements of First List\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i);
	}

	printf("Enter Elements of Second List\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",b+i);
	}

	for(i=0;i<n;i++)
	{
		*(c+i) = *(a+i) + *(b+i);
	}

	printf("Resultant List is\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",*(c+i));
	}

}     /* End of main() */

/*---------------------------------------
Output
How many Elements in each array...
4
Enter Elements of First List
1
2
3
4
Enter Elements of Second List
6
7
8
9
Resultant List is
7
9
11
13

----------------------------------------*/