/* Write a C program to accept an integer find the sum of the digits in it */

#include <stdio.h>

void main()
{
  long num, temp, digit, sum = 0;

  printf("Enter the number\n");
  scanf("%ld", &num);

  temp = num;

  while(num > 0)
  {
	 digit = num % 10;
	 sum  = sum + digit;
    num /= 10;
  }

  printf("Given number =%ld\n", temp);
  printf("Sum of the digits %ld =%ld\n", temp, sum);
}              /* End of main()*/

/*---------------------------------------
Enter the number
123456
Given number =123456
Sum of the digits 123456 =21
----------------------------------------*/