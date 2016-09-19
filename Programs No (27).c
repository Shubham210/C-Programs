/* Write a C program to accept a string and a substring and 
 * check if the substring is present in the given strig */

#include<stdio.h>
#include<conio.h>

void main()
{
	char str[80],search[10];	
	int count1=0,count2=0,i,j,flag;
	

	clrscr();

	puts("Enter a string:");
	gets(str);

	puts("Enter search substring:");
	gets(search);

	while (str[count1]!='\0')
		count1++;

	while (search[count2]!='\0')
		count2++;

	for(i=0;i<=count1-count2;i++)
	{
		for(j=i;j<i+count2;j++)
		{
			flag=1;
			if (str[j]!=search[j-i])
			{
				flag=0;
			   break;
			}
		}
		if (flag==1)
			break;
	}
	if (flag==1)
		puts("SEARCH SUCCESSFUL!");
	else
		puts("SEARCH UNSUCCESSFUL!");
	getch();
}
/*------------------------------
Output
Enter a string:
Hello how are you?
Enter search substring:
how
SEARCH SUCCESSFUL!
------------------------------*/