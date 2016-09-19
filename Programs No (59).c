/* Write a C program to accept a coordinate point in a XY coordinate system *
 * and determine its quadrant  															 */

#include <stdio.h>

void main()
{
	int x,y;

	printf("Enter the values for X and Y\n");
	scanf("%d %d",&x,&y);

	if( x > 0 && y > 0)
	  printf("point (%d,%d) lies in the First quandrant\n");
	else if( x < 0 && y > 0)
	  printf("point (%d,%d) lies in the Second quandrant\n");
	else if( x < 0 && y < 0)
	  printf("point (%d, %d) lies in the Third quandrant\n");
	else if( x > 0 && y < 0)
	  printf("point (%d,%d) lies in the Fourth quandrant\n");
	else if( x == 0 && y == 0)
	  printf("point (%d,%d) lies at the origin\n");

}  /* End of main() */

/*---------------------------------------------
Output
RUN 1
Enter the values for X and Y
3 5
point (5,3) lies in the First quandrant

RUN 2
Enter the values for X and Y
-4
-7
point (-7, -4) lies in the Third quandrant


---------------------------------------------*/