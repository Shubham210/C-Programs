/* Write a C program to accept a set of numbers and compute mean, *
 * varience and standard deviation                                */

#include <stdio.h>
#include <math.h>

void main()
{
   	float x[10];
	int  i, n;
   	float avrg, var, SD, sum=0, sum1=0;

   	printf("Enter howmany elements\n");
	scanf("%d", &n);

	for(i=0; i<n; i++)
   	{
	  scanf("%f", &x[i]);
   	}

	/* Compute the sum of all elements */
   	for(i=0; i<n; i++)
	{
     		sum = sum + x[i];
	}
   	avrg = sum /(float) n;

 	/* Compute  varaience  and standard deviation  */
	for(i=0; i<n; i++)
   	{
	  sum1 = sum1 + pow((x[i] - avrg),2);
   	}

   	var = sum1 / (float) n;
	SD = sqrt(var);

	printf("Avrage of all elements =%.2f\n", avrg);
   	printf("Varience of all elements =%.2f\n", avrg);
	printf("Standard deviation of all elements =%.2f\n", SD);

}

/*----------------------------------------------------
Output
Enter howmany elements
5
10
21
32
59
17
Avrage of all elements =27.80
Varience of all elements =27.80
Standard deviation of all elements =17.15
--------------------------------------------------------*/