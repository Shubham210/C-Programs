/* Write a C program to find the frequency of odd numbers   *
 * and even numbers in the input of a matrix                */

#include <stdio.h>

void main ()
{
 static int ma[10][10];
 int i,j,m,n,even=0,odd=0;

 printf ("Enter the order ofthe matrix \n");
 scanf ("%d %d",&m,&n);

 printf ("Enter the coefficients if matrix \n");
 for (i=0;i<m;++i)
 {
	for (j=0;j<n;++j)
	{
		scanf ("%d", &ma[i][j]);
		if ((ma[i][j]%2) == 0)
		{
			++even;
		}
		else
			++odd;
	}
  }
  printf ("The given matrix is\n");
  for (i=0;i<m;++i)
  {
		for (j=0;j<n;++j)
		{
			 printf (" %d",ma[i][j]);
		}
		printf ("\n");
	}

	printf ("\nThe frequency of occurance of odd number  = %d\n",odd);
	printf ("The frequency of occurance of even number = %d\n",even);

}  	/* End of main() */

/*-----------------------------------------------------
Output
Enter the order ofthe matrix
3 3
Enter the coefficients if matrix
1 2 3
4 5 6
7 8 9
The given matrix is
 1 2 3
 4 5 6
 7 8 9

The frequency of occurance of odd number  = 5
The frequency of occurance of even number = 4

-------------------------------------------------------*/