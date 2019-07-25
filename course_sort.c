#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "structdef.h"
#include<stdlib.h>

#define NUM 1
#define EXIT_SUCCESS 1

//Â¼Èë
void input(SCORE array[], int n) {
	int i;
	SCORE* p = array;
	for (i = 0; i < n; i++)
	{
		printf("input number:");
		scanf("%ld", &(p->number));
		printf("input name:");
		scanf("%s", &(p->name));
		printf("input English, Math, Physics socre:");
		scanf("%d,%d,%d", &(p->req.english), &(p->req.mathema), &(p->req.physics));
		printf("input plutonomy, histroy:");
		scanf("%d,%d", &(p->elec.history), &(p->elec.plutonomy));

		float sum = ((p->req.english) + (p->req.mathema) + (p->req.physics) + (p->elec.history) + (p->elec.plutonomy));
		float avg = sum / 5;
		p->average = avg;
		p++;
	}
}

//ÅÅÐò
SCORE* sort(SCORE scores[], int n) {
	int i, j;
	SCORE tmp;
	for (i = 0; i <n ; i++)
	{
		for (j = 0; j < n-i; j++)
		{
			if (scores[j].average < scores[j+1].average)
			{
				tmp = scores[j];
				scores[j] = scores[j+1];
				scores[j + 1] = tmp;
			}
		}
	}
	return scores;
}

//Êä³ö
void output(SCORE* p, int n) {
	printf("%s   %s    %s", "name", "number", "avg");
	for (int j = 0; j < n; j++)
	{
		printf("%s   %ld   %f", p->name, p->number, p->average);
		p++;
	}
}

int main() {
	SCORE arr[NUM];
	SCORE* p;
	input(arr, NUM);
	p = sort(arr, NUM);
	output(p, NUM);
	return EXIT_SUCCESS;
}