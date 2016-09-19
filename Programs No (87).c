
/* Program to accept N integer number and store them in an array AR.
 * The odd elements in the AR are copied into OAR and other elements
 * are copied into EAR. Display the contents of OAR and EAR
 */

 #include <stdio.h>
 void main()
 {
    long int ARR[10], OAR[10], EAR[10];
    int i,j=0,k=0,n;

    printf("Enter the size of array AR\n");
    scanf("%d",&n);

    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
	scanf("%ld",&ARR[i]);
	fflush(stdin);
    }
    /*Copy odd and even elemets into their respective arrays*/
    for(i=0;i<n;i++)
    {
	if (ARR[i]%2 == 0)
	{
	   EAR[j] = ARR[i];
	   j++;
	}
	else
	{
	   OAR[k] = ARR[i];
	   k++;
	}
    }

    printf("The elements of OAR are\n");
    for(i=0;i<j;i++)
    {
	printf("%ld\n",OAR[i]);
    }

    printf("The elements of EAR are\n");
    for(i=0;i<k;i++)
    {
	printf("%ld\n", EAR[i]);
    }
 }	/*End of main()*/
 /*-------------------------------------
 Output
 Enter the size of array AR
 6
 Enter the elements of the array
 12
 345
 678
 899
 900
 111
 The elements of OAR are
 345
 899
 111
 The elements of EAR are
 12
 678
 900
 ---------------------------------------*/
