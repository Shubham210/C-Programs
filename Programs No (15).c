/* Write a  C program to illustrate the concept of unions*/

#include <stdio.h>
#include <conio.h>

void main()
{
	 union number
	 {
		int  n1;
		float n2;
	 };

	 union number x;

	 clrscr() ;

	 printf("Enter the value of n1: ");
	 scanf("%d", &x.n1);
	 printf("Value of n1 =%d", x.n1);

    	 printf("\nEnter the value of n2: ");
	 scanf("%d", &x.n2);
	 printf("Value of n2 = %d\n",x.n2);

} 	/* End of main() */

/*------------------------------------
Output
Enter the value of n1: 2
Value of n1 =2
Enter the value of n2: 3
Value of n2 = 0
------------------------------------*/
