#include <stdio.h>

void selection_sort(int* A, int* B) //첫 번째 방법
{
	int small; int i; int n = 10;
	small = 99; 
	for (i = 0; i < n; i++)
		if (A[i] < small) small = A[i];
	B[0] = small;
}

void selection_sort(int* A, int* B) //두 번째 방법
{
	int small; int i; int n = 10;
	small = 0; //small을 위치로 변경
	for (i = 0; i < n; i++)
		if (A[i] < A[small]) small = i;
	B[0] = A[small]; A[small] = 99;//값을 찾지 않게 하기 위해서

	small = 0; //small을 위치로 변경
	for (i = 0; i < n; i++)
		if (A[i] < A[small]) small = i;
	B[1] = A[small]; A[small] = 99;

	small = 0; //small을 위치로 변경
	for (i = 0; i < n; i++)
		if (A[i] < A[small]) small = i;
	B[2] = A[small]; A[small] = 99;

	small = 0; //small을 위치로 변경
	for (i = 0; i < n; i++)
		if (A[i] < A[small]) small = i;
	B[3] = A[small]; A[small] = 99;

	small = 0; //small을 위치로 변경
	for (i = 0; i < n; i++)
		if (A[i] < A[small]) small = i;
	B[4] = A[small]; A[small] = 99;

	small = 0; //small을 위치로 변경
	for (i = 0; i < n; i++)
		if (A[i] < A[small]) small = i;
	B[5] = A[small]; A[small] = 99;

	small = 0; //small을 위치로 변경
	for (i = 0; i < n; i++)
		if (A[i] < A[small]) small = i;
	B[6] = A[small]; A[small] = 99;

	small = 0; //small을 위치로 변경
	for (i = 0; i < n; i++)
		if (A[i] < A[small]) small = i;
	B[7] = A[small]; A[small] = 99;

	small = 0; //small을 위치로 변경
	for (i = 0; i < n; i++)
		if (A[i] < A[small]) small = i;
	B[8] = A[small]; A[small] = 99;

	small = 0; //small을 위치로 변경
	for (i = 0; i < n; i++)
		if (A[i] < A[small]) small = i;
	B[9] = A[small]; A[small] = 99;
}

void selection_sort(int* A, int* B);
int main()
{
	int A[10] = { 10,13,25,15,4,20,5,29,14,21 };
	int B[10] = { 0 };
	int i;
	selection_sort(A, B);
	for (i = 0; i < 10; i++) printf("%d ", B[i]);
	printf("\n");

	return 0;
}
