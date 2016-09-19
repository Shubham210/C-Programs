 /*    Write a c program to convert given number of days to a measure of time
  *    given in years, weeks and days. For example 375 days is equal to 1 year
  *    1 week and 3 days (ignore leap year)
  */

 #include <stdio.h>
 #define DAYSINWEEK 7

 void main()
 {
    int ndays, year, week, days;

    printf("Enter the number of days\n");
    scanf("%d",&ndays);

    year = ndays/365;
    week = (ndays % 365)/DAYSINWEEK;
    days = (ndays%365) % DAYSINWEEK;

    printf ("%d is equivalent to %d years, %d weeks and %d days\n",
		   ndays, year, week, days);
 }

 /*-----------------------------------------------
 Output
 Enter the number of days
 375
 375 is equivalent to 1 years, 1 weeks and 3 days

 Enter the number of dayy
 423
 423 is equivalent tt 1 years, 8 weeks and 2 days

 Enter the number of days
 1497
 1497 is equivalent to 4 years, 5 weeks and 2 days
 ---------------------------------------------------*/



