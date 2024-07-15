#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

void initialize(char arr[SIZE][SIZE]);
void display(char arr[SIZE][SIZE], char arr1[SIZE]);
void addEdge(char arr[SIZE][SIZE], char x, char y);


int main(){
	char arr[SIZE][SIZE];
	char arr1[] = "ABCDE";
	initialize(&arr);
	addEdge(&arr, 'A', 'B');
	addEdge(&arr, 'A', 'C');
	addEdge(&arr, 'A', 'D');
	addEdge(&arr, 'B', 'C');
	addEdge(&arr, 'B', 'E');
	addEdge(&arr, 'D', 'C');
	addEdge(&arr, 'D', 'E');
	addEdge(&arr, 'D', 'B');
	display(arr, arr1);
}

void initialize(char arr[SIZE][SIZE]){
	int i;
	int j;
	for(i = 0; i < SIZE; i++){
		for(j = 0; j < SIZE; j++){
			arr[i][j] = 0;
		}
	}
}
void display(char arr[SIZE][SIZE], char arr1[SIZE]){
	int i;
	int j;
	printf("- A B C D E\n");
	for(i = 0; i < SIZE; i++){
		printf("%c ", arr1[i]);
		for(j = 0; j < SIZE; j++){
			if(i == j){
				printf("- ");
			}
			else{
				printf("%d ", arr[i][j]);
			}
			
		}
		printf("\n");
	}
}

void addEdge(char arr[SIZE][SIZE], char x, char y){
	arr[x-'A'][y-'A'] = 1;
	arr[y-'A'][x-'A'] = 1;
}
