/* Write a C program to create a file called emp.rec and store information *
 * about a person, in terms of his name, age and salary.                   */

#include <stdio.h>

void main()
{
	FILE *fptr;
	char name[20];
   int age;
	float salary;

   fptr = fopen ("emp.rec", "w"); /*open for writing*/

	if (fptr == NULL)
   {
      printf("File does not exists\n");
		return;
	}

   printf("Enter the name\n");
   scanf("%s", name);
	fprintf(fptr, "Name    = %s\n", name);

   printf("Enter the age\n");
	scanf("%d", &age);
   fprintf(fptr, "Age     = %d\n", age);

	printf("Enter the salary\n");
   scanf("%f", &salary);
	fprintf(fptr, "Salary  = %.2f\n", salary);

   fclose(fptr);
}

/*---------------------------------------------------------------------------
Output
Enter the name
Prabhu
Enter the age
25
Enter the salary
25000
-------------------------------------
Please note that you have to open the file called emp.rec in the directory

Name    = Prabhu
Age     = 25
Salary  = 25000.00
-----------------------------------------------------------------------------*/