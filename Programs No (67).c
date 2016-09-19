/* Write a C program to accept a matricx of order MxN and find the trcae and *
 * normal of a matrix HINT:Trace is defined as the sum of main diagonal      *
 * elements and Normal is defined as squre root of the sum of all            *
 * the elements                                                              */

#include <stdio.h>
#include <math.h>

void main ()
{
	static int ma[10][10];
	int i,j,m,n,sum=0,sum1=0,a=0,normal;

	printf ("Enter the order of the matrix\n");
	scanf ("%d %d", &m,&n);

	printf ("Enter the ncoefficients of the matrix \n");
	for (i=0;i<m;++i)
	{
		for (j=0;j<n;++j)
		{
			scanf ("%d",&ma[i][j]);
			a = ma[i][j]*ma[i][j];
			sum1 = sum1+a;
		}
	}
	normal = sqrt(sum1);
	printf ("The normal of the given matrix is = %d\n",normal);
	for (i=0;i<m;++i)
	{
		sum = sum + ma[i][i];
	}
	printf ("Trace of the matrix is = %d\n",sum);

}			/*End of main() */
/*---------------------------------------------------
Output
Enter the order of the matrix
3 3
Enter the ncoefficients of the matrix
1 2 3
4 5 6
7 8 9
The normal of the given matrix is = 16
Trace of the matrix is = 15

Run 2
Enter the order of the matrix
2 2
Enter the ncoefficients of the matrix
2 4
6 8
The normal of the given matrix is = 10
Trace of the matrix is = 10

-----------------------------------------------------*/