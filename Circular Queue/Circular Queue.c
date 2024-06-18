#include "Circular Queue.h"

bool isEmpty(CircularQ Q){
	bool res = false;
	if((Q.rear +1)%MAX == Q.front){
		res = true;
	}
	return res;
}

bool isFull(CircularQ Q){
	bool res = false;
	if((Q.rear + 2)%MAX == Q.front){
		res = true;
	}
	return res;
}

void initialize(CircularQ *Q){
	int i;
	for(i=0; i < MAX-1; i++){
		Q->data[i] = -1;
	}
	Q->front = 0;
	Q->rear = MAX-1;
}

void eQ(CircularQ *Q, int data){
	bool full;
	full = isFull(*Q);
	if(full == false){
		Q->rear = (Q->rear+1) % MAX;
		Q->data[Q->rear] = data;
	}
	else{
		printf("Already Full!");
	}
}

void deQ(CircularQ *Q){
	bool empty;
	empty = isEmpty(*Q);
	if(empty == false){
		Q->data[Q->front] = -1;
		Q->front = (Q->front+1) % MAX;
	}
	else{
		printf("Already Empty!");
	}
}

int Front(CircularQ Q){
	bool empty;
	int res = -1;
	empty = isEmpty(Q);
	if(empty == false){
		res = Q.data[Q.front];
	}
	return res;
}

int Rear(CircularQ Q){
	bool empty;
	int res = -1;
	empty = isEmpty(Q);
	if(empty == false){
		res = Q.data[Q.rear];
	}
	return res;
}

void display(CircularQ Q){
	bool empty = isEmpty(Q);
	while(empty != true){
		printf("%d\n", Q.data[Q.front]);
		deQ(&Q);
		empty = isEmpty(Q);
	}
		
	
}

void visualize(CircularQ Q){
	int i;
	printf("index | value\n");
	for(i = 0; i < MAX-1; i++){
		printf("%-4d  | %d\n", i, Q.data[i]);
	}
}
