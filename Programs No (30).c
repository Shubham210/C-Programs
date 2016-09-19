 /* Write a c program to find whether a given year    *
  * is leap year or not                               */

 #include <stdio.h>

 void main()
 {
	int year;

	printf("Enter a year\n");
	scanf("%d",&year);

	if ( (year % 4) == 0)
	   printf("%d is a leap year",year);
	else
	   printf("%d is not a leap year\n",year);
 }

/*------------------------------------------
Output
Enter a year
2000
2000 is a  leap year

RUN2
Enter a year
2007
2007 is not a leap year
------------------------------------------*/

