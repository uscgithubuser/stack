#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "StackLinked.h"

void initStackLL(StackPtr *S){
	*S = NULL;
}

StackPtr createStackLL(){
	StackPtr S;
	S = NULL;
	return S;
}

bool isEmptyLL(StackPtr S){
	return (S == NULL);
}

bool Stack_PushLL(StackPtr *S, int elem){
	bool empty = isEmptyLL(*S);
	bool res = false;
	if(empty == true){
		StackPtr newNode = (StackPtr)malloc(sizeof(Stack));
			if(newNode != NULL){
				newNode->data = elem;
				newNode->link = NULL;
				*S = newNode;
				res = true;
			}	
	}
	else{
		StackPtr newNode = (StackPtr)malloc(sizeof(Stack));
			if(newNode != NULL){
				newNode->data = elem;
				newNode->link = *S;
				*S = newNode;
				res = true;
		}
	}
	
	return res;
	
}

bool Stack_PopLL(StackPtr *S){
	bool res = isEmpty(*S);
	if(res == false){
		StackPtr temp;
		temp = *S;
		*S = temp->link;
		free(temp);
	}
	return res;
}

int Stack_PeekLL(StackPtr S) {
    if (isEmptyLL(S)) {
        return -1; 
    }

    return S->data; 
}

void displayLL(StackPtr S){
	int peek;
	bool pop;
	bool empty;
	do{
		peek = Stack_PeekLL(S);
		printf("%d \n", peek);
		pop = Stack_PopLL(&S);
	}while(empty != true);
	
}

void visualizeLL(StackPtr S){
	StackPtr temp;
	for(temp = S; temp != NULL; temp = temp->link){
		printf("%d\n", temp->data);
	}
}
