#include "Circular Queue.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	CircularQ Q;
	initialize(&Q);
	bool empty;
	bool full;
	eQ(&Q, 5);
	eQ(&Q, 7);
	eQ(&Q, 4);
	eQ(&Q, 8);
	deQ(&Q);
	
	
	display(Q);
	visualize(Q);
	
	return 0;
	
}
