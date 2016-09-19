/* Write a C program to accept two matrices and *
 * find the sum and difference of the matrices  */

#include <stdio.h>
#include <stdlib.h>

int A[10][10], B[10][10], sumat[10][10], diffmat[10][10];
int i, j, R1, C1, R2, C2;

void main()
{

	/* Function declarations */
   	void readmatA();
	void printmatA();
   	void readmatB();
	void printmatB();
	void sum();
   	void diff();

	printf("Enter the order of the matrix A\n");
   	scanf("%d %d", &R1, &C1);

	printf("Enter the order of the matrix B\n");
	scanf("%d %d", &R2,&C2);

	if( R1 != R2 && C1 != C2)
	{
	  printf("Addition and subtraction are possible\n");
	  exit(1);
	}
	else
	{
      		printf("Enter the elements of matrix A\n");
		readmatA();
		printf("MATRIX A is\n");
		printmatA();

      		printf("Enter the elements of matrix B\n");
		readmatB();
      		printf("MATRIX B is\n");
      		printmatB();

      		sum();
      		diff();
	}
} 			/* main() */

/* Function to read a matrix A */
void readmatA()
{
		for(i=0; i<R1; i++)
     		{
			for(j=0; j<C1; j++)
			{
				scanf("%d",&A[i][j]);
			}
		}
      		return;
}

/* Function to read a matrix B */
void readmatB()
{
		for(i=0; i<R2; i++)
      		{
			 for(j=0; j<C2; j++)
			 {
					scanf("%d",&B[i][j]);
			 }
      		}
}

/* Function to print a matrix A */
void printmatA()
{
      		for(i=0; i<R1; i++)
      		{
			for(j=0; j<C1; j++)
			{
				printf("%3d",A[i][j]);
			}
			printf("\n");
		}
}

/* Function to print a matrix B */
void printmatB()
{
      		for(i=0; i<R2; i++)
      		{
			 for(j=0; j<C2; j++)
			 {
					printf("%3d",B[i][j]);
			 }
			 printf("\n");
      		}
}
/*Function to find the sum of elements of matrix A and Matrix B*/
void sum()
{
    for(i=0; i<R1; i++)
    {
		 for(j=0; j<C2; j++)
       		 {
			sumat[i][j] = A[i][j] + B[i][j];
		 }
     }
     printf("Sum matrix is\n");
     for(i=0; i<R1; i++)
     {
		 for(j=0; j<C2; j++)
       		 {
			printf("%3d",sumat[i][j]) ;
		 }
		 printf("\n");
     }
     return;
}

/*Function to find the difference of elements of matrix A and Matrix B*/
void diff()
{
    for(i=0; i<R1; i++)
    {
		 for(j=0; j<C2; j++)
       		 {
			diffmat[i][j] = A[i][j] - B[i][j];
		 }
     }
     
     printf("Difference matrix is\n");
     for(i=0; i<R1; i++)
      {
       for(j=0; j<C2; j++)
       {
		printf("%3d",diffmat[i][j]);
       }
       printf("\n");
     }
	  return;
}

/*---------------------------------------------------
Output
Enter the order of the matrix A
2 2
Enter the order of the matrix B
2 2
Enter the elements of matrix A
1
2
3
4
MATRIX A is
  1  2
  3  4
Enter the elements of matrix B
2
4
6
8
MATRIX B is
  2  4
  6  8
Sum matrix is
  3  6
  9 12
Difference matrix is
 -1 -2
 -3 -4
-----------------------------------------------------*/