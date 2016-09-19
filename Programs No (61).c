/* Write a C Program to accept a grade and declare the equivalent descrption *
* if code is S, then print SUPER															  *
* if code is A, then print VERY GOOD													  *
* if code is B, then print FAIR   														  *
* if code is Y, then print ABSENT														  *
* if code is F, then print FAILS															  */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void main()
{
		char remark[15];
		char grade;

		printf("Enter the grade\n");
		scanf("%c",&grade);

		grade=toupper(grade);  /* lower case letter to upper case */

		switch(grade)
		{
			case 'S': strcpy(remark," SUPER");
						 break;

			case 'A': strcpy(remark," VERY GOOD");
						 break;

			case 'B': strcpy(remark," FAIR");
						 break;

			case 'Y': strcpy(remark," ABSENT");
						 break;

			case 'F': strcpy(remark," FAILS");
						 break;

			default : strcpy(remark, "ERROR IN GRADE\n");
						 break;

		}  		    /* End of switch */

		printf("RESULT  : %s\n",remark);

}     	            /* End of main() */

/*-------------------------------------------
Output
RUN 1
Enter the grade
s
RESULT  :  SUPER

RUN 2
Enter the grade
y
RESULT  :  ABSENT
-----------------------------------------------*/