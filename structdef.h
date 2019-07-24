#pragma once
typedef struct _required_corse {
	int english;
	int mathema;
	int physics;
}REQ;

typedef struct _elective_course {
	int plutonomy;
	int history;
}ELEC;

typedef struct _score {
	int number;
	char name[15];
	REQ req;
	ELEC elec;
	float average;

}SCORE;

