/* Develop functions					  *
 * a) To read a given matrix				  *
 * b) To output a matrix				  *
 * c) To compute the product of twomatrices		  *
 *							  *
 * Use the above functions to read in two matrices A (MxN)*
 * B (NxM), to compute the product of the two matrices, to*
 * output the given matrices and the computed matrix in a *
 * main function					  */

#include <stdio.h>
#include <conio.h>
#define MAXROWS 10
#define MAXCOLS 10

void main()
{
   int A[MAXROWS][MAXCOLS], B[MAXROWS][MAXCOLS], C[MAXROWS][MAXCOLS];
   int M, N;

   /*Function declarations*/

   void readMatrix(int arr[][MAXCOLS], int M, int N);
   void printMatrix(int arr[][MAXCOLS], int M, int N);
   void productMatrix(int A[][MAXCOLS], int B[][MAXCOLS], int C[][MAXCOLS],
	    int M, int N);

   clrscr();

   printf("Enter the value of M and N\n");
   scanf("%d %d",&M, &N);
   printf ("Enter matrix A\n");
   readMatrix(A,M,N);
   printf("Matrix A\n");
   printMatrix(A,M,N);

   printf ("Enter matrix B\n");
   readMatrix(B,M,N);
   printf("Matrix B\n");
   printMatrix(B,M,N);

   productMatrix(A,B,C, M,N);

   printf ("The product matrix is\n");
   printMatrix(C,M,N);
}

/*Input matrix A*/
void readMatrix(int arr[][MAXCOLS], int M, int N)
{
       int i, j;
       for(i=0; i< M ; i++)
       {
	 for ( j=0; j < N; j++)
	 {
	     scanf("%d",&arr[i][j]);
	 }
       }
}
void printMatrix(int arr[][MAXCOLS], int M, int N)
{
       int i, j;
       for(i=0; i< M ; i++)
       {
	 for ( j=0; j < N; j++)
	 {
	     printf("%3d",arr[i][j]);
	 }
	 printf("\n");
       }
}

/* Multiplication of matrices */
void productMatrix(int A[][MAXCOLS], int B[][MAXCOLS], int C[][MAXCOLS],
      int M, int N)
{
       int i, j, k;
       for(i=0; i< M ; i++)
       {
	 for ( j=0; j < N; j++)
	 {
	    C[i][j] = 0 ;
	    for (k=0; k < N; k++)
	    {
	      C[i][j] = C[i][j] + A[i][k] * B[k][j];
	    }
	 }
       }
}
/*---------------------------------------------
Output
Enter the value of M and N
3 3
Enter matrix A
1 1 1
2 2 2
3 3 3
Matrix A
  1  1  1
  2  2  2
  3  3  3
Enter matrix B
1 2 3
4 5 6
7 8 9
Matrix B
  1  2  3
  4  5  6
  7  8  9
The product matrix is
 12 15 18
 24 30 36
 36 45 54
--------------------------------*/


