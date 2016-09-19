/* Write a C program to accept a set of names and sort them in   *
 * an alphabetical order, Use structures to store the names      */

#include<stdio.h>
#include<conio.h>
#include<string.h>

struct person
{
		char name[10];
		int rno;
};
typedef struct person NAME;
NAME  stud[10], temp[10];

void main()
{
	 int no,i;

	 void sort(int N); 	/* Function declaration */

	 clrscr();
	 fflush(stdin);

	 printf("Enter the number of students in the list\n");
	 scanf("%d",&no);

	 for(i = 0; i < no; i++)
	 {
		 printf("\nEnter the name of  person %d : ", i+1);
		 fflush(stdin);
		 gets(stud[i].name);

		 printf("Enter the roll number of %d : ", i+1);
		 scanf("%d",&stud[i].rno);
		 temp[i] = stud[i];
	 }

	 printf("\n*****************************\n");
	 printf ("     Names before sorting     \n");
	 /* Print the list of names before sorting */
	 for(i=0;i<no;i++)
	 {
			printf("%-10s\t%3d\n",temp[i].name,temp[i].rno);
	 }

	 sort(no);       /* Function call */

	 printf("\n*****************************\n");
	 printf ("     Names after sorting     \n");
	 printf("\n*****************************\n");
	 /* Display the sorted names */
	 for(i=0;i<no;i++)
	 {
			printf("%-10s\t%3d\n",stud[i].name,stud[i].rno);

	 }
	 printf("\n*****************************\n");
}          /* End of main() */

/* Function to sort the given names */
void sort(int N)
{
		 int i,j;
		 NAME temp;

		 for(i = 0; i < N-1;i++)
		 {
				for(j = i+1; j < N; j++)
				{
					if(strcmp(stud[i].name,stud[j].name) > 0 )
					{
						temp    = stud[i];
						stud[i] = stud[j];
						stud[j] = temp;
					}
				}
		 }
}  		/* end of sort() */

/*--------------------------------------------------------
Enter the number of students in the list
5

Enter the name of  person 1 : Rajashree
Enter the roll number of 1 : 123

Enter the name of  person 2 : John
Enter the roll number of 2 : 222

Enter the name of  person 3 : Priya
Enter the roll number of 3 : 331

Enter the name of  person 4 : Anand
Enter the roll number of 4 : 411

Enter the name of  person 5 : Nirmala
Enter the roll number of 5 : 311

*****************************
     Names before sorting
Rajashree       123
John            222
Priya           331
Anand           411
Nirmala         311

*****************************
     Names after sorting

*****************************
Anand           411
John            222
Nirmala         311
Priya           331
Rajashree       123

*****************************
----------------------------------------------------*/