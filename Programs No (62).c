/* Write a C program to find the factorial of a given number */

#include <stdio.h>
void main()
{
	int  i,fact=1,num;

	printf("Enter the number\n");
	scanf("%d",&num);

	if( num <= 0)
		fact = 1;
	else
	{
		for(i = 1; i <= num; i++)
		{
			fact = fact * i;
		}
	}			     /* End of else */

	printf("Factorial of %d =%5d\n", num,fact);

}                           /* End of main() */

/*-------------------------------------------
Output
Enter the number
5
Factorial of 5 =  120

---------------------------------------------*/
