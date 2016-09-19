/* Write a C program to accept a string and find the number of times the word 'the'
 * appears in it*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int count=0,i,times=0,t,h,e,space;
	char str[100];

	clrscr();
	puts("Enter a string:");
	gets(str);

	/*Traverse the string to count the number of characters*/
	while (str[count]!='\0')
	{
		count++;
	}
	/*Finding the frequency of the word 'the'*/
	for(i=0;i<=count-3;i++)
	{
		t=(str[i]=='t'||str[i]=='T');
		h=(str[i+1]=='h'||str[i+1]=='H');
		e=(str[i+2]=='e'||str[i+2]=='E');
		space=(str[i+3]==' '||str[i+3]=='\0');
		if ((t&&h&&e&&space)==1)
		   times++;
	}
	printf("Frequency of the word \'the\' is %d\n",times);
	getch();
}
/*-----------------------------------------------------
Output
Enter a string:
The Teacher's day is the birth day of Dr.S.Radhakrishnan
Frequency of the word 'the' is 2
---------------------------------------------------------*/



