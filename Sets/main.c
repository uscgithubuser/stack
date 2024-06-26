#include <stdio.h>
#include <stdlib.h>
#include "Set_Array.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int size_A = 5;
	int size_B = 6;
	int size_C;
	SET *A = (SET*)malloc(size_A*sizeof(SET)); //{0 1 3 4 6}
	SET *B = (SET*)malloc(size_B*sizeof(SET)); //{0 1 2 3 4 5}
	SET *C;
	int i;
	for(i = 0; i < size_A; i++){
		A[i] = i*1.5;
	}
	for(i = 0; i < size_B; i++){
		B[i] = i*1;
	}
	
	C = get_Intersection(A, size_A, B, size_B, &size_C);
	del_Val(&C, &size_C);
	displaySet(C, size_C);
	
	
	return 0;
}
