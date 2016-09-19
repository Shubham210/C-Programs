/* Write a C program to accept N numbers and arrange them in an asceding order */

#include <stdio.h>

void main ()
{
  int i,j,a,n,number[30];

  printf ("Enter the value of N\n");
  scanf ("%d", &n);

  printf ("Enter the numbers \n");
  for (i=0; i<n; ++i)
  scanf ("%d",&number[i]);

  for (i=0; i<n; ++i)
  {
    	 for (j=i+1; j<n; ++j)
	 {
			if (number[i] > number[j])
			{
				a= number[i];
				number[i] = number[j];
				number[j] = a;
			}
	 }
  }

  printf ("The numbers arrenged in ascending order are given below\n");
  for (i=0; i<n; ++i)
  printf ("%d\n",number[i]);
}                              /* End of main() */

/*------------------------------------------------------------------
Output
Enter the value of N
5
Enter the numbers
80
20
67
10
45
The numbers arrenged in ascending order are given below
10
20
45
67
80
------------------------------------------------------------------*/