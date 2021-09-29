#include <stdio.h>
#define MAX_SIZE 100

int sum(int[], int);
int i; //전역 선언

int main(void)
{
	int array[MAX_SIZE];

	for (i = 0; i < MAX_SIZE; i++) array[i] = i;

	int res = sum(array, MAX_SIZE);

	printf("The sum is: %d ", res);

	return 0;
}

int sum(int a[], int n)
{
	int sum = 0;
	for (i = 0; i < n; i++) sum += a[i];
	return sum;
}