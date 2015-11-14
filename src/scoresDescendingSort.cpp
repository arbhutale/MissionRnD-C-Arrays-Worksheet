/*
OVERVIEW:  You are given scores for students of a class in alphabetical order. Write a function that sorts these scores in descending order.
Input is array of structures of type student (each student has name and score).
E.g.: If input is [ { "stud1", 20 }, { "stud2", 30 }, { "stud3", 40 } ] (three students with marks 20, 30 , 40).
Output for this will be [ { "stud3", 40 }, { "stud2", 30 }, { "stud1", 20 } ]

INPUTS: Array of structures of type student, length of array.

OUTPUT: Sort the array in descending order of scores.

ERROR CASES: Return NULL for invalid Inputs.

NOTES:
*/

#include<stdio.h>
struct student
{
	char name[10];
	int score;
};

void sort(int m, struct student  *x)
{
	int i, j, t;


	for (i = 1; i <= m - 1; i++)
		for (j = 1; j <= m - i; j++)
			if (x[j - 1].score <= x[j].score)
			{
				t = x[j - 1].score;
				x[j - 1].score = x[j].score;
				x[j].score = t;
				char	*str1 = x[j - 1].name;
				*x[j - 1].name = *x[j].name;
				*x[j].name = *str1;
			}
}
void * scoresDescendingSort(struct student *students, int len)
{
	int i;
	if (students[0].name == NULL)
		return NULL;
	if (len < 0)
		return NULL;
	for (i = 0; i < len; i++)
	{
		if (students[i].score == NULL)
		{
			return NULL;
			break;
		}
	}
	for (i = 0; i < len; i++)
	
	sort(len, students);
	/*for (i = 0; i < len; i++)
	{
	printf("%s", students[i].name);
	printf("%d", students[i].score);
	}*/

}