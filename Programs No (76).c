/* Write a C program to find the area of a circl, given the radius*/

#include <stdio.h>
#include <conio.h>
#include <math.h>
#define PI 3.142

void main()
{
	float radius, area;
	clrscr();

   printf("Enter the radius of a circle\n");
	scanf ("%f", &radius);

	area = PI * pow (radius,2);

	printf ("Area of a circle = %5.2f\n", area);
	//5.2 means you want it to display 5 characters, 2 after the decimal point (the five is there because you want to see the 0. and then three characters)
}
