/* Write a C program to accept a matrix of order M x N and store its elements *
 * and interchange the main diagonal elements of the matrix                   *
	with that of the secondary diagonal elements                               */

#include <stdio.h>

void main ()
{

	static int ma[10][10];
	int i,j,m,n,a;

	printf ("Enetr the order of the matix \n");
	scanf ("%d %d",&m,&n);

	if (m ==n )
	{
		printf ("Enter the co-efficients of the matrix\n");
		for (i=0;i<m;++i)
		{
			for (j=0;j<n;++j)
			{
				scanf ("%dx%d",&ma[i][j]);
			}
		}

		printf ("The given matrix is \n");
		for (i=0;i<m;++i)
		{
			for (j=0;j<n;++j)
			{
				printf (" %d",ma[i][j]);
			}
			printf ("\n");
		}

		for (i=0;i<m;++i)
		{
				a = ma[i][i];
				ma[i][i]   = ma[i][m-i-1];
				ma[i][m-i-1] = a;
		}

		printf ("THe matrix after changing the \n");
		printf ("main diagonal & secondary diagonal\n");
		for (i=0;i<m;++i)
		{
			for (j=0;j<n;++j)
			{
					printf (" %d",ma[i][j]);
			}
			printf ("\n");
		}
	}
	else
			printf ("The givan order is not square matrix\n");

}    /* end of main() */

/*----------------------------------------------------
Output
Enetr the order of the matix
3 3
Enter the co-efficients of the matrix
1 2 3
4 5 6
7 8 9
The given matrix is
 1 2 3
 4 5 6
 7 8 9
THe matrix after changing the
main diagonal & secondary diagonal
 3 2 1
 4 5 6
 9 8 7
----------------------------------------------------------*/






