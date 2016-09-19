/* Write a C program to insert a particular element in a specified position  *
 * in a given array                                                          */

#include <stdio.h>
#include <conio.h>

void main()
{
	int  x[10];
   	int  i, j, n, m, temp, key, pos;

	clrscr();

   	printf("Enter how many elements\n");
	scanf("%d", &n);

   	printf("Enter the elements\n");
	for(i=0; i<n; i++)
	{
    		scanf("%d", &x[i]);
	}

	printf("Input array elements are\n");
	for(i=0; i<n; i++)
	{
	  printf("%d\n", x[i]);
	}

	for(i=0; i< n; i++)
	{
	  for(j=i+1; j<n; j++)
	  {
		if (x[i] > x[j])
		{
	   		temp = x[i];
			x[i] = x[j];
	   		x[j] = temp;
		}
     	  }
	}

	printf("Sorted list is\n");
   	for(i=0; i<n; i++)
	{
    		 printf("%d\n", x[i]);
	}

	printf("Enter the element to be inserted\n");
   	scanf("%d",&key);

   	for(i=0; i<n; i++)
	{
      		if ( key < x[i] )
		{
			pos = i;
			break;
		}
   	}

	m = n - pos + 1 ;

   	for(i=0; i<= m ; i++)
	{
    		 x[n-i+2] = x[n-i+1] ;
 	}

   	x[pos] = key;

	printf("Final list is\n");
   	for(i=0; i<n+1; i++)
   	{
	  	printf("%d\n", x[i]);
   	}
}           /* End of main() */

/*-------------------------------------
Output
Enter how many elements
5
Enter the elements
2
14
67
83
29
Input array elements are
2
14
67
83
29
Sorted list is
2
14
29
67
83
Enter the element to be inserted
34
Final list is
2
14
29
34
67
83
-------------------------------------------------*/




