/* Write a C program to display the inventory of items in a store/shop *
 * The inventory maintains details such as name, price, quantity and   * 
 * manufacturing date of each item.                                    */

#include <stdio.h>
#include <conio.h>

void main()
{       
	struct date
	{
		int day;
		int month;
		int year;
	};

	struct details
	{
		char name[20];
		int price;
		int code;
		int qty;
		struct date mfg;
	};

	struct details item[50];
	int n,i;

	clrscr();

	printf("Enter number of items:");
	scanf("%d",&n);
	fflush(stdin);

	for(i=0;i<n;i++)
	{
		fflush(stdin);
		printf("Item name:");
		scanf("%[^\n]",item[i].name);

		fflush(stdin);
		printf("Item code:");
		scanf("%d",&item[i].code);
		fflush(stdin);

		printf("Quantity:");
		scanf("%d",&item[i].qty);
		fflush(stdin);

		printf("price:");
		scanf("%d",&item[i].price);
		fflush(stdin);

		printf("Manufacturing date(dd-mm-yyyy):");
		scanf("%d-%d-%d",&item[i].mfg.day,&item[i].mfg.month,&item[i].mfg.year);
	}
	printf("             *****  INVENTORY *****\n");
	printf("------------------------------------------------------------------\n");
	printf("S.N.|    NAME           |   CODE   |  QUANTITY |  PRICE  |MFG.DATE\n");
	printf("------------------------------------------------------------------\n");
	for(i=0;i<n;i++)
		printf("%d     %-15s        %-d          %-5d     %-5d     %d/%d/%d\n",i+1,item[i].name,item[i].code,item[i].qty,item[i].price,
			      item[i].mfg.day,item[i].mfg.month,item[i].mfg.year);
	printf("------------------------------------------------------------------\n");
	getch();
}

/*------------------------------------------------------
Enter number of items:5
Item name:Tea Powder
Item code:123
Quantity:23
price:40
Manufacturing date(dd-mm-yyyy):12-03-2007
Item name:Milk Powder
Item code:345
Quantity:20
price:80
Manufacturing date(dd-mm-yyyy):30-03-2007
Item name:Soap Powder
Item code:510
Quantity:10
price:30
Manufacturing date(dd-mm-yyyy):01-04-2007
Item name:Washing Soap
Item code:890
Quantity:25
price:12
Manufacturing date(dd-mm-yyyy):10-03-2007
Item name:Shampo
Item code:777
Quantity:8
price:50
Manufacturing date(dd-mm-yyyy):17-05-2007
				 *****  INVENTORY *****
------------------------------------------------------------------------
S.N.|    NAME           |   CODE   |  QUANTITY |  PRICE  |MFG.DATE
------------------------------------------------------------------------
1     Tea Powder             123          23        40        12/3/2007
2     Milk Powder            345          20        80        30/3/2007
3     Soap Powder            510          10        30        1/4/2007
4     Washing Soap           890          25        12        10/3/2007
5     Shampo                 777          8         50        17/5/2007
------------------------------------------------------------------------

--------------------------------------------------------------------*/