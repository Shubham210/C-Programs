/* Write a C program to find the sum of cos(x) series */

#include<stdio.h>
#include<math.h>

void main()
{
   	int n,x1,i,j;
   	float x,sign,cosx,fact;
   

   	printf("Enter the number of the terms in aseries\n");
   	scanf("%d",&n);

	printf("Enter the value of x(in degrees)\n");
	scanf("%f",&x);

	x1=x;

	x=x*(3.142/180.0); /* Degrees to radians*/

	cosx=1;

	sign=-1;

	for(i=2;i<=n;i=i+2)
   	{
		 fact=1;

		 for(j=1;j<=i;j++)
		 {
			fact=fact*j;
        	 }

		 cosx=cosx+(pow(x,i)/fact)*sign;
      		 sign=sign*(-1);
	 }

	 printf("Sum of the cosine series                    = %7.2f\n",cosx);
	 printf("The value of cos(%d) using library function = %f\n",x1,cos(x));

} 	/*End of main() */

/*--------------------------------------------------------
Output
Enter the number of the terms in aseries
5
Enter the value of x(in degrees)
60
Sum of the cosine series                    =    0.50
The value of cos(60) using library function = 0.499882
--------------------------------------------------------*/

