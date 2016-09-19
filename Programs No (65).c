/* Write a C program to accept a matrix of order M x N and find the sum *
 * of each row and each column of a matrix                              */

#include <stdio.h>

void main ()
{
	static int m1[10][10];
	int i,j,m,n,sum=0;

	printf ("Enter the order of the matrix\n");
	scanf ("%d %d", &m,&n);
	printf ("Enter the co-efficients of the matrix\n");

	for (i=0;i<m;++i)
	{
		for (j=0;j<n;++j)
		{
				scanf ("%d",&m1[i][j]);
		}
	}
	for (i=0;i<m;++i)
	{
		for (j=0;j<n;++j)
		{
			sum = sum + m1[i][j] ;
		}
		printf ("Sum of the %d row is = %d\n",i,sum);
		sum = 0;
	}

	sum=0;

	for (j=0;j<n;++j)
	{
		for (i=0;i<m;++i)
		{
			sum = sum+m1[i][j];
		}
		printf ("Sum of the %d column is = %d\n", j,sum);
		sum = 0;
	}
}         /*End of main() */
/*---------------------------------------------------
Output
Enter the order of the matrix
3 3
Enter the co-efficients of the matrix
1 2 3
4 5 6
7 8 9
Sum of the 0 row is = 6
Sum of the 1 row is = 15
Sum of the 2 row is = 24
Sum of the 0 column is = 12
Sum of the 1 column is = 15
Sum of the 2 column is = 18

----------------------------------------------------*/