/* This program is to illustrate how user authentication  *
 * is made before allowing the user to access the secured *
 * resources. It asks for the user name and then the      *
 * password. The password that you enter will not be      *
 * displayed, instead that character is replaced by '*'   */

#include <stdio.h>
#include <conio.h>

void main()
{
	 char pasword[10],usrname[10], ch;
	 int i;

	 clrscr();

	 printf("Enter User name: ");
	 gets(usrname);
	 printf("Enter the password <any 8 characters>: ");

	 for(i=0;i<8;i++)
	 {
			ch = getch();
			pasword[i] = ch;
			ch = '*' ;
			printf("%c",ch);
	 }

	 pasword[i] = '\0';

	 /*If you want to know what you have entered as password, you can print it*/
	 printf("\nYour password is :");

	 for(i=0;i<8;i++)
	 {
         	printf("%c",pasword[i]);
	 }
}

/*-----------------------------------------------
Output
Enter User name: Latha
Enter the password <any 8 characters>: ********
Your password is :Wipro123
-----------------------------------------------*/