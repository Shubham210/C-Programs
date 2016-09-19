/* Write a C Program to convert the lower case letters to upper case *
 * and vice-versa                                                    */

#include <stdio.h>
#include <ctype.h>
#include <conio.h>

void main()
{
  char sentence[100];
  int count, ch, i;
  clrscr();

  printf("Enter a sentence\n");
  for(i=0; (sentence[i] = getchar())!='\n'; i++)
  {
    ;
  }
  count = i;

  printf("\nInput sentence is     : %s ",sentence);

  printf("\nResultant sentence is : ");
  for(i=0; i < count; i++)
  {
    ch = islower(sentence[i]) ? toupper(sentence[i]) : tolower(sentence[i]);
	 putchar(ch);
  }

} 	/*End of main()

/*-----------------------------------------
Output
Enter a sentence
gOOD mORNING

Input sentence is     : gOOD mORNING

Resultant sentence is :Good Morning
------------------------------------------*/