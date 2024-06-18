#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "StackLinked.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	StackPtr S1;
	initStackLL(&S1);
	bool res;
	int peek;
	bool empty;
	res = Stack_PushLL(&S1, 2);
	res = Stack_PushLL(&S1, 5);
	res = Stack_PushLL(&S1, 3);
	
	displayLL(S1);

	
	
	
	

	
	
	
	
	
	
	
	

} 
