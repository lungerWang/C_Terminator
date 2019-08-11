#include <stdio.h>
#include "structdef.h"
#include<stdlib.h>

#define NUM 2
#define EXIT_SUCCESS 1
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
		scanf("%d,%d", &(p->elec.history), &(p->elec.history));
		p->average = (p->req.english + p->req.mathema + p->req.physics + p->elec.history + p->elec.history) / 5;
		p++;
	}
} 