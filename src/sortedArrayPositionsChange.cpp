/*
OVERVIEW: In a given ascending sorted array, two numbers are changed their position, please fix those two numbers.
E.g.: In [10, 40, 30, 20, 50] 20 and 40 are swapped, so final output will be [10, 20, 30, 40, 50]

INPUTS: Ascending sorted array with two positions swapped, length of the array.

OUTPUT: Update sorted array by fixing swapped numbers.

ERROR CASES: Return NULL for invalid Inputs.

NOTES:
*/
#include <stdio.h>
#include<conio.h>
#include <stdio.h>
#include<conio.h>
/*void swap(int a, int b)
{

int temp;
temp = a;
a = b;
b = temp;
//printf("a=%d", a);
//printf("b=%d", b);
return ;
}*/
void * sortedArrayPositionsChange(int *Arr, int len)
{
	if (Arr == NULL)
		return NULL;
	if (len < 0)
		return NULL;
	int i, j, k = 0, l = 0, temp;
	for (i = 0; i < len; i++)
	{
		//printf("hi");
		if (Arr[i] >Arr[i + 1])
		{

			k = i;
			//printf("k-%d\n", k);
			break;
		}
	}
	for (j = k + 1; j <len - 1; j++)
	{
		//printf("hi");
		if (Arr[j] > Arr[j + 1])
		{
			l = j + 1;

			//printf("l=%d\n", l);
			break;
		}
	}
	temp = Arr[k];
	Arr[k] = Arr[l];
	Arr[l] = temp;
	/*printf("%d\n",Arr[k]);
	printf("%d\n",Arr[l]);*/
}
