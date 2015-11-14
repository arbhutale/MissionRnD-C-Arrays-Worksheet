/*
OVERVIEW: Given a sorted array, insert a given number into the array at appropriate position.
E.g.: Arr = [2, 4, 6], num = 5 final Arr = [2, 4, 5, 6]. 5 is inserted at 2nd index.

INPUTS: Integer	Array pointer, length of the array, number to be inserted.

OUTPUT: Array pointer after inserting number.

ERROR CASES: Return NULL for invalid inputs.

NOTES: Use realloc to allocate memory.
*/
#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
#include <malloc.h>

int * sortedArrayInsertNumber(int *Arr, int len, int num)
{
	int i;
	int *ptr;
	if (Arr == NULL)
		return NULL;
	if (len < 0)
		return NULL;
	ptr = (int*)realloc(Arr, sizeof(int)* (len + 1));
	//	printf(" new %d\n", ptr[3]);
	
	int temp = len - 1;
	while (temp>0)
	{




		if (ptr[temp] > num)
		{
			//printf("%d", Arr[temp]);
			ptr[temp + 1] = ptr[temp];
			temp--;
		}
		else
		{
			ptr[temp + 1] = num;
			break;
		}
	}
	if (temp == 0)
		ptr[0] = num;
	//printf("%d", Arr[0]);
	return ptr;

}