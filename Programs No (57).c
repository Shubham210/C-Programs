/* Write a C program to accept two integers and check if they are equal */

#include <stdio.h>
void main()
{
	int m,n;

	printf("Enter the values for  M and N\n");
	scanf("%d %d", &m,&n);

	if(m == n )
		printf("M and  N are equal\n");
	else
		printf("M and N are not equal\n");

}  /* End of main() */

/*------------------------------------
output
Enter the values for  M and N
34 45
M and N are not equal

-------------------------------------*/