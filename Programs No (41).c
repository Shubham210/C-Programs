/* Write a C Program to check if a given matrix is an identity matrix */

#include <stdio.h>

void main()
{
   int A[10][10];
   int i, j, R, C, flag =1;

   printf("Enter the order of the matrix A\n");
   scanf("%d %d", &R, &C);

   printf("Enter the elements of matrix A\n");
   for(i=0; i<R; i++)
   {
     for(j=0; j<C; j++)
     {
	scanf("%d",&A[i][j]);
     }
   }
   printf("MATRIX A is\n");
   for(i=0; i<R; i++)
   {
     for(j=0; j<C; j++)
     {
	printf("%3d",A[i][j]);
     }
     printf("\n");
   }

/* Check for unit (or identity) matrix */

    for(i=0; i<R; i++)
    {
     for(j=0; j<C; j++)
     {
	 if(A[i][j] != 1 && A[j][i] !=0)
	 {
	   flag = 0;
	   break;
	 }
	}
   }

   if(flag == 1 )
	printf("It is identity matrix\n");
   else
	printf("It is not a identity matrix\n");
}

/*------------------------------------------
Output
Run 1
Enter the order of the matrix A
2 2
Enter the elements of matrix A
2 2
1 2
MATRIX A is
  2  2
  1  2
It is not a identity matrix

Run 2
Enter the order of the matrix A
2 2
Enter the elements of matrix A
1 0
0 1
MATRIX A is
  1  0
  0  1
It is identity matrix
------------------------------------------*/