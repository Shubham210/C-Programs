/* Write a C program to compute the value of X ^ N given X and N as inputs  */

 #include <stdio.h>
 #include <math.h>

 void main()
 {
    long int x,n,xpown;
    long int power(int x, int n);

    printf("Enter the values of X and N\n");
    scanf("%ld %ld",&x,&n);

    xpown = power (x,n);

    printf("X to the power N = %ld\n");
 }

 /*Recursive function to computer the X to power N*/

 long int power(int x, int n)
 {
     if (n==1)
       return(x);
     else if ( n%2 == 0)
       return (pow(power(x,n/2),2));  /*if n is even*/
     else
       return (x*power(x, n-1));     /* if n is odd*/
}
/*-------------------------------------
Output
Enter the values of X and N
2 5
X to the power N = 32

RUN2
Enter the values offX and N
4 4
X to the power N ==256

RUN3
Enter the values of X and N
5 2
X to the power N = 25

RUN4
Enter the values of X and N
10 5
X to the power N = 100000
-----------------------------------------*/
