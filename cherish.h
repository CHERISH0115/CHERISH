#include<stdio.h>
#define MAXSIZE 1024
typedef int DataType;
typedef struct {
	DataType data[MAXSIZE];
	int last;

}SeqList;
SeqList SL;

int insertElem(SeqList* L, int i, DataType x) {
	int j;
	if (L->last == MAXSIZE - 1) {
		printf("overflow"); return 0;
	}
	if ((i < 1) || (i > L->last + 2)) {
		printf("error"); return 0;
	}
	for (j = L->last; j >= i - 1; j--)
		L->data[j + 1] = L->data[j];
	L->data[i - 1] = x;
	L->last++;
	return 1;

}

int deleteElem(SeqList* L, int i) {
	int j;
	if (i<1 || i>L->last + 1) {
		printf("第%d个元素不存在", i); return 0;
	}
	for (j = i; j <= L->last; j++)
		L->data[j - 1] = L->data[j];
	L->last--;
	return 1;

}

int LocateElem(SeqList* L, DataType x) {
	int i;
	for (i = 0; i <= L->last; i++)
		if (L->data[i] == x) return i + 1;
	return 0;

}

int LocateElem1(SeqList* L, DataType x) {
	int i = L->last;
	while (i >= 0 && L->data[i] != x) i--;
	return i + 1;

}

