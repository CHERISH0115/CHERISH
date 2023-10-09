#include "cherish.h"
#include <stdio.h>

int main() {
	SeqList a;
	a.last = 0;
	insertElem(&a, 1, 1);
	insertElem(&a, 2, 2);
	insertElem(&a, 3, 3);
	insertElem(&a, 4, 4);
	insertElem(&a, 5, 5);
	deleteElem(&a, 2);
	
	for (int i = 0; i < a.last; i++) {
		printf("%d ", a.data[i]);
	}
	printf("\n3所在的位置为%d个\n", LocateElem(&a, 3));
	return 0;
}
