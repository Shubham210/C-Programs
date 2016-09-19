/* Write a C program to convert the given binary number into its equivalent decimal */

#include <stdio.h>

void main()
{
  int   num, bnum, dec = 0, base = 1, rem ;

  printf("Enter the binary number(1s and 0s)\n");
  scanf("%d", &num);           /*Enter maximum five digits or use long int*/

  bnum = num;

  while( num > 0)
  {
    	rem = num % 10;
	 dec = dec + rem * base;
	 num = num / 10 ;
    	base = base * 2;
  }

  printf("The Binary number is = %d\n", bnum);
  printf("Its decimal equivalent is =%d\n", dec);

} 			/* End of main() */

/*---------------------------------------------------
Outpput
Enter the binary number(1s and 0s)
1010
The Binary number is = 1010
Its decimal equivalent is =10
----------------------------------------------------*/
