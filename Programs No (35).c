 /* Write a c program to find the length of a string  *
  * without using the built-in function               */

#include <stdio.h>

void main()
{
	char string[50];
	int  i, length = 0;

	printf("Enter a string\n");
	gets(string);

	for (i=0; string[i] != '\0'; i++) /*keep going through each */
	{                                 /*character of the string */
	    length++;                     /*till its end */
	}
	printf("The length of a string is the number of characters in it\n");
	printf("So, the length of %s =%d\n", string, length);
}

/*----------------------------------------------------
Output
Enter a string
hello
The length of a string is the number of characters in it
So, the length of hello = 5

RUN2
Enter a string
E-Commerce is hot now
The length of a string is the number of characters in it
So, the length of E-Commerce is hot now =21
----------------------------------------------------------*/

