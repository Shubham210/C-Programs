/*  Write a C program to accept a matric and determine whether    *
 * it is a sparse matrix. A sparse martix is matrix which         *
 * has more zero elements than nonzero elements                   */

#include <stdio.h>

void main ()
{
	static int m1[10][10];
	int i,j,m,n;
	int counter=0;

	printf ("Enter the order of the matix\n");
	scanf ("%d %d",&m,&n);

	printf ("Enter the co-efficients of the matix\n");
	for (i=0;i<m;++i)
	{
		for (j=0;j<n;++j)
		{
			scanf ("%d",&m1[i][j]);
			if (m1[i][j]==0)
			{
				++counter;
			}
		}
	}
	if (counter>((m*n)/2))
	{
		printf ("The given matrix is sparse matrix \n");
	}
	else
		printf ("The given matrix is not a sparse matrix \n");

	printf ("There are %d number of zeros",counter);

}       /* EN dof main() */
/*----------------------------------------------
Output
Enter the order of the matix
2 2
Enter the co-efficients of the matix
1 2
3 4
The given matrix is not a sparse matrix
There are 0 number of zeros

Run 2
Enter the order of the matix
3 3
Enter the co-efficients of the matix
1 0 0
0 0 1
0 1 0
The given matrix is sparse matrix
There are 6 number of zeros

-----------------------------------------------*/