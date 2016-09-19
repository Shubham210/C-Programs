/*  Write a C program to accept a matrix of given order and
 * interchnge any two rows and columns in the original matrix*/

#include <stdio.h>

void main()
{
	static int m1[10][10],m2[10][10];
	int i,j,m,n,a,b,c, p, q, r;

	printf ("Enter the order of the matrix\n");
	scanf ("%d %d",&m,&n);
 
	printf ("Enter the co-efficents of the matrix\n");
	for (i=0; i<m;++i)
 	{
		for (j=0;j<n;++j)
   		{
			scanf ("%d,",&m1[i][j]);
			m2[i][j] = m1[i][j];
   		}
	}

	printf ("Enter the numbers of two rows to be exchnged \n");
	scanf ("%d %d", &a,&b);

	for (i=0;i<m;++i)
	{
		c = m1[a-1][i];               /* first row has index is 0 */
		m1[a-1][i] = m1[b-1][i];
		m1[b-1][i] = c;
	}

	printf ("Enter the numbers of two columns to be exchnged\n");
	scanf ("%d %d",&p,&q);

	printf ("The given matrix is \n");
	for (i=0;i<m;++i)
	{
			for (j=0;j<n;++j)
				printf (" %d",m2[i][j]);
			printf ("\n");
	}

	for (i=0;i<n;++i)
	{
		r = m2[i][p-1];       		/* first column index is 0 */
		m2[i][p-1] = m2[i][q-1];
		m2[i][q-1] = r;
 	}

	printf ("The matix after interchnging the two rows(in the original matrix)\n");
	for (i=0; i<m; ++i)
 	{
			for (j=0; j<n; ++j)
   		{
				printf (" %d",m1[i][j]);
   		}
			printf ("\n");
 	}

	printf("The matix after interchnging the two columns(in the original matrix)\n");
	for (i=0;i<m;++i)
 	{
		for (j=0;j<n;++j)
  			printf (" %d", m2[i][j]);
		printf ("\n");
	}
}

/*-----------------------------------------------------------------------
Enter the order of the matrix
3 3
Enter the co-efficents of the matrix
1 2 4
5 7 9
3 0 6
Enter the numbers of two rows to be exchnged
1 2
Enter the numbers of two columns to be exchnged
2 3
The given matrix is
 1 2 4
 5 7 9
 3 0 6
The matix after interchnging the two rows (in the original matrix)
 5 7 9
 1 2 4
 3 0 6
The matix after interchnging the two columns(in the original matrix)
 1 4 2
 5 9 7
 3 6 0
-------------------------------------------------------------------------*/


