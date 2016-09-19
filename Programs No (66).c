/* Write a C program to find accept a matric of order M x N and find  *
 * the sum of the  main diagonal and off diagonal elements            */

#include <stdio.h>

void main ()
{
	static int ma[10][10];
	int i,j,m,n,a=0,sum=0;

	printf ("Enetr the order of the matix \n");
	scanf ("%d %d",&m,&n);

	if ( m == n )
	{
		printf ("Enter the co-efficients of the matrix\n");

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

		for (i=0;i<m;++i)
		{
			sum = sum + ma[i][i];
			a = a + ma[i][m-i-1];
		}

		printf ("\nThe sum of the main diagonal elements is = %d\n",sum);
		printf ("The sum of the off diagonal elemets is   = %d\n",a);
	}
	else
		printf ("The givan order is not square matrix\n");
}                 /* End of main() */

/*--------------------------------------------------------
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

The sum of the main diagonal elements is = 15
The sum of the off diagonal elemets is   = 15

Run 2
Enetr the order of the matix
2 3
The givan order is not square matrix

--------------------------------------------------------*/



