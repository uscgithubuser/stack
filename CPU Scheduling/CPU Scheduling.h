#ifndef CPU_SCHEDULING
#define CPU_SCHEDULING
#include <stdio.h>
#include <stdlib.h>
#define MAX 20

typedef struct{
	char name[10]
	int BT;
	int AT;
}Process;

typedef struct{
	Process 
};

void initList();
void insertCPU();
void displayCPU();
void display_ET();
void display_CT();



#endif
