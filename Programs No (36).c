 /*   Write a c program to find the length of a string
  *    without using the built-in function also check
  *    whether it is a palindrome or not
  */

 #include <stdio.h>
 #include <string.h>

 void main()
 {
	char string[25], revString[25]={'\0'};
	int  i,length = 0, flag = 0;

	clrscr();
	fflush(stdin);

	printf("Enter a string\n");
	gets(string);

	for (i=0; string[i] != '\0'; i++) /*keep going through each */
	{                                 /*character of the string */
	    length++;                     /*till its end */
	}
	printf("The length of the string \'%s\' = %d\n", string, length);

	for (i=length-1; i >= 0 ; i--)
	{
	   revString[length-i-1] = string[i];
	}
	/*Compare the input string and its reverse. If both are equal
	  then the input string is palindrome. Otherwise it is
	  not a palindrome */

	for (i=0; i < length ; i++)
	{
	   if (revString[i] == string[i])
		 flag = 1;
	   else
		 flag = 0;

	}

	if (flag == 1)
	   printf ("%s is a palindrome\n", string);
	else
	   printf("%s is not a palindrome\n", string);
 }


/*----------------------------------------------------
Output
Enter a string
madam
The length of the string 'madam' = 5
madam is a palindrome

RUN2
Enter a string
good
The length of the string 'good' = 4
good is not a palindrome
----------------------------------------------------------*/

