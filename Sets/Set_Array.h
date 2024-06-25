#ifndef SET_ARRAY
#define SET_ARRAY
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int SET;

void displaySet(SET A[], int size_A);
SET* get_Union(SET A[], int size_A, SET B[], int size_B, int *size_C);
SET* get_Intersection(SET A[], int size_A, SET B[], int size_B, int *size_C);
void add_Val(SET *A[], int *size_A, int data);
void del_Val(SET*A[], int *size_A);



#endif
