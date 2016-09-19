/* Write a C program to accept an integer and reverse it */

#include <stdio.h>

void main()
{
  long  num, rev = 0, temp, digit;

  printf("Enter the number\n");  /*For better programming,choose 'long int' */
  scanf("%ld", &num);

  temp = num;

  while(num > 0)
  {
	 digit = num % 10;
    rev = rev * 10 + digit;
    num /= 10;
  }

  printf("Given number   = %ld\n", temp);
  printf("Its reverse is = %ld\n", rev);
}

/* ---------------------------
Output
Enter the number
123456
Given number   = 123456
Its reverse is = 654321
------------------------------*/