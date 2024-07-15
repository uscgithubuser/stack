#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

typedef struct node{
	char data;
	struct node *link;
}NodeType, *NodePtr;


void initialize(NodePtr L[]);
void display(NodePtr L[]);

int main(){
	NodePtr List[SIZE];
}

void initialize(NodePtr L[]){
	int i;
	for(i = 0; i < SIZE; i++){
		L[i] = NULL;
	}
}

void display(NodePtr L[]){
	int i;
	int j;
	NodePtr trav;
	for(i = 0; i < SIZE; i++){
		for(trav = L[i]; trav != NULL;  trav = trav->link){
			printf("[%c]-> ", trav->data);
		}
	}
}

