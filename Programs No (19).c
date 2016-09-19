/* This program accepts an array of N elements and a key.   *
 * Then it searches for the desired element. If the search  *
 * is successful, it displays "SUCCESSFUL SEARCH".          *
 * Otherwise, a message "UNSUCCESSFUL SEARCH" is displayed. */

#include <stdio.h>
void main()
{
			int table[20];
			int i, low, mid, high, key, size;

			printf("Enter the size of an array\n");
			scanf("%d", &size);

			printf("Enter the array elements\n");
			for(i = 0; i < size; i++)
			{
				scanf("%d", &table[i]);
			}

			printf("Enter the key\n");
			scanf("%d", &key);

			/* search begins */

			low = 0;
			high = (size - 1);

			while(low <= high)
			{
				mid = (low + high)/2;
				if(key == table[mid])
				{
					printf("SUCCESSFUL SEARCH\n");
					return;
				}
				if(key < table[mid])
					high = mid - 1;
				else
					low = mid + 1;
			}

			printf("UNSUCCESSFUL SEARCH\n");
}    				/* End of main() */
/*----------------------------------
Output
Output
Enter the size of an array
5
Enter the array elements
12
36
45
78
99
Enter the key
45
SUCCESSFUL SEARCH
----------------------------------*/