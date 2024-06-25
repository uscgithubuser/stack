#include "Set_Array.h"

void displaySet(SET A[], int size_A){
	int i;
	printf("{");
	for(i = 0; i < size_A; i++){
		printf("%d ", A[i]);
	}
	printf("}");
}

SET* get_Union(SET A[], int size_A, SET B[], int size_B, int *size_C){
	SET *C = (SET*)malloc((size_A+size_B)*sizeof(SET));
	int i;
	int j;
	int k = 0;
	for(i = 0; i < size_A; i++){
		C[k] = A[i];
		k++;
	}
	for(i = 0; i < size_A; i++){
		for(j = 0; j < size_B && new == 0; j++){
			if()
		}
	}
	
	C = (SET*)realloc(C, k*sizeof(SET));
	*size_C = k++;
	return C;
	
}

void add_Val(SET *A[], int *size_A, int data){
	*A = (SET*)realloc(*A, ((*size_A)+1)*sizeof(SET));
	if(*A != NULL){
		(*A)[*size_A] = data;
		(*size_A)++;	
	}
	
}

void del_Val(SET*A[], int *size_A){
	if(*size_A > 0){
		*A = (SET*)realloc(*A, ((*size_A)-1)*sizeof(SET));
			if(*A != NULL){
				(*size_A)--;
		}
	}
}
