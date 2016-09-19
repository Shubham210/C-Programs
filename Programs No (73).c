 /* Write a C program to find the sum of all elements of   *
 * an array using pointersas arguments                    */

#include <stdio.h>

void main()
{
	static int array[5]={ 200,400,600,800,1000 };
	int sum;

	int addnum(int *ptr);     /* function prototype */

	sum = addnum(array);

	printf("Sum of all array elements = %5d\n", sum);

} 	/* End of main() */


int addnum(int *ptr)
{
	int index, total=0;

	for(index = 0; index < 5; index++)
	{
		total += *(ptr+index);
	}
	return(total);
}
/*-----------------------------------
Output
Sum of all array elements =  3000
------------------------------------*/