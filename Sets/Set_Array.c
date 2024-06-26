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
	int k;
	for(i = 0, j = 0, k = 0;  i != size_A || j != size_B; ){
		if(A[i] < B[j]){
			C[k] = A[i];
			i++;
			k++;
		}
		else if(A[i] > B[j]){
			C[k] = B[j];
			j++;
			k++;
		}
		else{
			C[k] = B[j];
			k++;
			i++;
			j++;
		}
	}
	
	C = (SET*)realloc(C, k*sizeof(SET));
	*size_C = k++;
	return C;
	
}

SET* get_Intersection(SET A[], int size_A, SET B[], int size_B, int *size_C){
		SET *C = (SET*)malloc((size_A)*sizeof(SET));
	int i;
	int j;
	int k;
	for(i = 0, j = 0, k = 0;  i != size_A && j != size_B; ){
		if(A[i] < B[j]){
			i++;
		}
		else if(A[i] > B[j]){
			j++;
		}
		else{
			C[k] = A[i];
			k++;
			i++;
			j++;
		}
	}
	
	C = (SET*)realloc(C, k*sizeof(SET));
	*size_C = k;
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
