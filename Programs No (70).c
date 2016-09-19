/* Write a C program to accept a amtric of order MxN and sort all rows *
 * of the matrix in ascending order and all columns in descendng order */

#include <stdio.h>

void main ()
{
	static int ma[10][10],mb[10][10];
	int i,j,k,a,m,n;

	printf ("Enter the order of the matrix \n");
	scanf ("%d %d", &m,&n);

	printf ("Enter co-efficients of the matrix \n");
	for (i=0;i<m;++i)
	{
		for (j=0;j<n;++j)
		{
			scanf ("%d",&ma[i][j]);
			mb[i][j] = ma[i][j];
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

	printf ("After arranging rows in ascending order\n");
	for (i=0;i<m;++i)
	{
		for (j=0;j<n;++j)
		{
			for (k=(j+1);k<n;++k)
			{
				if (ma[i][j] > ma[i][k])
				{
					a = ma[i][j];
					ma[i][j] = ma[i][k];
					ma[i][k] = a;
				}
			}
		}
	}      /* End of outer for loop*/

	for (i=0;i<m;++i)
	{
		for (j=0;j<n;++j)
		{
			printf (" %d",ma[i][j]);
		}
		printf ("\n");
	}

	printf ("After arranging the columns in descending order \n");
	for (j=0;j<n;++j)
	{
		for (i=0;i<m;++i)
		{
			for (k=i+1;k<m;++k)
			{
				if (mb[i][j] < mb[k][j])
				{
					a = mb[i][j];
					mb[i][j] = mb[k][j];
					mb[k][j] = a;
				}
			}
		}
	}       /* End of outer for loop*/

	for (i=0;i<m;++i)
	{
		for (j=0;j<n;++j)
		{
			printf (" %d",mb[i][j]);
		}
		printf ("\n");
	}

}		/*End of main() */

/*-------------------------------------------------
Enter the order of the matrix
2 2
Enter co-efficients of the matrix
3 1
5 2
The given matrix is
 3 1
 5 2
After arranging rows in ascending order
 1 3
 2 5
After arranging the columns in descending order
 5 2
 3 1
-----------------------------------------------------*/