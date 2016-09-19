/* Write a C program to generate Fibonacci sequence *
 * Fibonacci sequence is 0 1 1 2 3 5 8 13 21 ...    */

#include <stdio.h>

void main()
{
  int   fib1=0, fib2=1, fib3, limit, count=0;

  printf("Enter the limit to generate the fibonacci sequence\n");
  scanf("%d", &limit);

  printf("Fibonacci sequence is ...\n");
  printf("%d\n",fib1);
  printf("%d\n",fib2);
  count = 2;           /* fib1 and fib2 are already used */

  while( count < limit)
  {
    fib3 = fib1 + fib2;
	 count ++;
	 printf("%d\n",fib3);
	 fib1 = fib2;
	 fib2 = fib3;
  }

} 			/* End of main() */
/*-----------------------------------------------------------
Enter the limit to generate the fibonacci sequence
7
Fibonacci sequence is ...
0
1
1
2
3
5
8
-----------------------------------------------------------*/