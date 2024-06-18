#ifndef CIRCULAR_QUEUE
#define CIRCULAR_QUEUE
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 5

typedef struct{
	int data[MAX];
	int front;
	int rear;
}CircularQ;

bool isEmpty(CircularQ Q);
bool isFull(CircularQ Q);
void initialize(CircularQ *Q);
void eQ(CircularQ *Q, int data);
void deQ(CircularQ *Q);
int Front(CircularQ Q);
int Rear(CircularQ Q);
void display(CircularQ Q);
void visualize(CircularQ Q);




#endif
