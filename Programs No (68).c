/* Write a C program to accept a matric of order MxN and find its transpose */

#include <stdio.h>
void main ()
{
	static int ma[10][10];
	int i,j,m,n;

	printf ("Enter the order of the matrix \n");
	scanf ("%d %d",&m,&n);

	printf ("Enter the coefiicients of the matrix\n");
	for (i=0;i<m;++i)
	{
		for (j=0;j<n;++j)
		{
			scanf ("%d",&ma[i][j]);
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

	printf ("Transpose of matrix is \n");
	for (j=0;j<n;++j)
	{
		for (i=0;i<m;++i)
		{
			printf (" %d",ma[i][j]);
		}
		printf ("\n");
	}
}  	/* End of main() */

/*------------------------------------------
Output
Enter the order of the matrix
2 2
Enter the coefiicients of the matrix
3 -1
6 0
The given matrix is
 3 -1
 6 0
Transpose of matrix is
 3 6
 -1 0

-------------------------------------------*/