#include <stdio.h>

void array_concat(int*, int, int*, int, int*);

int main(void)
{
	int n1 = 3;
	int n2 = 5;

	int A[] = {1,2,3};
	int B[] = {4,5,6,7,8};
	int C[20];

	array_concat(A, n1, B, n2, C);

	//Ãâ·Â
	for (int i = 0; i < n1 + n2; i++) {
		printf("%d ", C[i]);
	}

	return 0;
}

void array_concat(int* a, int n1, int* b, int n2, int* c)
{
	int i;
	for (i = 0; i < n1; i++) {
		c[i] = a[i];
	}
	for (i = n1; i < n1 + n2; i++) {
		c[i] = b[i - n1];
	}
}