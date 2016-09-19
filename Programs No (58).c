//* Write a C program to accept the height of a person in centermeter and  *
 * categorize the person based on height as taller, dwarf and             *
 * average height person                                                  */

#include <stdio.h>
void main()
{
	float ht;

	printf("Enter  the Height (in centimetres)\n");
	scanf("%f",&ht);

	if(ht < 150.0)
	  printf("Dwarf\n");
	else if((ht>=150.0) && (ht<=165.0))
     printf(" Average Height\n");
	else if((ht>=165.0) && (ht <= 195.0))
	  printf("Taller\n");
	else
	  printf("Abnormal height\n");

}  /* End of main() */

/*-----------------------------------
Output
Enter  the Height (in centimetres)
45
Dwarf
----------------------------------------*/