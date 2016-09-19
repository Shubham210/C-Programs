 /*    Write a c program to multifly given number by 4     *
  *    using bitwise operators                             */

 #include <stdio.h>

 void main()
 {
	long number, tempnum;

	printf("Enter an integer\n");
	scanf("%ld",&number);
	tempnum = number;
	number = number << 2;   /*left shift by two bits*/

	printf("%ld x 4 = %ld\n", tempnum,number);
}

/*------------------------------
Output
Enter an integer
15
15 x 4 = 60

RUN2
Enter an integer
262
262 x 4 = 1048
---------------------------------*/

