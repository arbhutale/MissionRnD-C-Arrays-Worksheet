/*
OVERVIEW:  You are given scores for students of a class in alphabetical order. Write a function that returns the names and scores of top K students.
Input is array of structures of type student (each student has name and score).
E.g.: If input is [ { "stud1", 20 }, { "stud2", 30 }, { "stud3", 40 } ] (three students with marks 20, 30 , 40) and K value is 2.
return top 2 students [ { "stud2", 30 }, { "stud3", 40 } ]

INPUTS: array of structures of type student, length of the array, integer K.

OUTPUT: Return top K students from array. Output need not be in decreasing order of scores.

ERROR CASES: Return NULL for invalid inputs.

NOTES:
*/

#include <iostream>
#include <malloc.h>
struct student
{
	char name[10];
	int score;
};

void copy(struct student *a, struct student **b, int i, int j)
{
	//printf("%c", a[0]);
	int k = 0;

	for (k = 0; k<10; k++)
	{
		//printf("h");
		b[j]->name[k] = a[i].name[k];
		//printf("%c",a[i]);
	}
}
void sortstu(int m, struct student  *x)
{
	int i = 0, j = 0, t;
	for (i = 0; i <=m - 1; i++)
		for (j = 0; j <m - i-1; j++)
			if (x[j].score >= x[j + 1].score)
			{
				t = x[j].score;
				x[j].score = x[j + 1].score;
				x[j + 1].score = t;
				char	*str1 = x[j].name;
				*x[j].name = *x[j + 1].name;
				*x[j + 1].name = *str1;
			}
}
struct student ** topKStudents(struct student *students, int len, int K)
{
	int i, j = 0, len1 = len - K;
	struct student **arr = NULL;
	arr = (struct student **)realloc(arr, (K + 1) * sizeof(struct studnet *));

	//arr = (struct student*)malloc(sizeof(struct student*)*K);


	if (students[0].name == NULL)
		return NULL;
	if (len < 0)
		return NULL;
	if (K == 0)
		return NULL;
	for (i = 0; i < len; i++)
	{

		if (students[i].score == NULL)
		{
			return NULL;
			break;
		}
	}

	sortstu(len, students);
	if (len1 < 0)
	{
		len1 = 0;
	}
	for (i = len1; i < len; i++)
	{
		arr[j] = (struct student *)malloc(sizeof(struct student));

		//arr[j] = (struct student*)malloc(sizeof(struct student));
		//arr[j]->name = (char *)malloc(sizeof(char)*10);
		copy(students, arr, i, j);
		arr[j]->score = students[i].score;
		//printf("%d", arr[j]->score);
		//printf("%s\n", arr[j]->name);
		j++;
	}
	return arr;
}