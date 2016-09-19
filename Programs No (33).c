/* Program to accepts two strings and compare them. Finally it prints *
 * whether both are equal, or first string is greater than the second *
 * or the first string is less than the second string                 */

#include<stdio.h>
#include<conio.h>

void main()
{
	int count1=0,count2=0,flag=0,i;
	char str1[10],str2[10];

	clrscr();
	puts("Enter a string:");
	gets(str1);

	puts("Enter another string:");
	gets(str2);
	/*Count the number of characters in str1*/
	while (str1[count1]!='\0')
		count1++;
	/*Count the number of characters in str2*/
	while (str2[count2]!='\0')
		count2++;
	i=0;

	/*The string comparison starts with thh first character in each string and
	continues with subsequent characters until the corresponding characters
	differ or until the end of the strings is reached.*/

	while ( (i < count1) && (i < count2))
	{
		if (str1[i] == str2[i])
		{
			i++;
			continue;
		}
		if (str1[i]<str2[i])
		{
			flag = -1;
			break;
		}
		if (str1[i] > str2[i])
		{
			flag = 1;
			break;
		}
	}

	if (flag==0)
	    printf("Both strings are equal\n");
	if (flag==1)
	    printf("String1 is greater than string2\n", str1, str2);
	if (flag == -1)
	    printf("String1 is less than string2\n", str1, str2);
	getch();
}
/*----------------------------------------
Output
Enter a string:
happy
Enter another string:
HAPPY
String1 is greater than string2

RUN2
Enter a string:
Hello
Enter another string:
Hello
Both strings are equal

RUN3
Enter a string:
gold
Enter another string:
silver
String1 is less than string2
----------------------------------------*/

