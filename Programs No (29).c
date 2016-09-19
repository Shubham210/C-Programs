/* Write a C program to accept a decimal number and convert it binary    *
 * and count the number of 1's in the binary number                     */

#include <stdio.h>

void main()
{
  long num, dnum, rem, base = 1, bin = 0, no_of_1s = 0;

  printf("Enter a decimal integer\n");
  scanf("%ld", &num);

  dnum = num;

  while( num > 0 )
  {
	 rem = num % 2;
	 if ( rem == 1 )  	/*To count no.of 1s*/
	 {
		no_of_1s++;
	 }
	 bin = bin + rem * base;
	 num = num / 2 ;
	 base = base * 10;
  }
  printf("Input number is                   = %d\n", dnum);
  printf("Its Binary equivalent is          = %ld\n", bin);
  printf("No.of 1's in the binary number is = %d\n", no_of_1s);

} 			/* End of main() */

/*--------------------------------------------------
Output
Enter a decimal integer
75
Input number is                   = 75
Its Binary equivalent is          = 1001011
No.of 1's in the binary number is = 4


RUN2
Enter a decimal integer
128
Input number is                   = 128
Its Binary equivalent is          = 10000000
No.of 1's in the binary number is = 1

-----------------------------------------------------*/