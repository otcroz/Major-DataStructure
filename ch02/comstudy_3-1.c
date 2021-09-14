/*#include <stdio.h>

void selection_sort(int d[], int* e7, int* e8)
{
	int i, j, temp, min;

	for (i = 0; i < 9; i++) {
		min = i;
		for (j = i + 1; j < 10; j++) {
			if (d[min] > d[j])
				min = j;
			(*e7)++;
		}
		temp = d[i]; d[i] = d[min]; d[min] = temp;
		(*e8)++;
	}

}

void SortArray(int d[])
{
	for (int i = 0; i < 10; i++) {
		printf("%d ", d[i]);
	}
	printf("\n");
}

int main(void)
{
	int data[] = { 20, 1, 50, 55, 34, 21, 4, 66, 71, 8 };
	int e7 = 0, e8 = 0;

	printf("정렬 전 데이터: "); SortArray(data);
	selection_sort(data, &e7, &e8);
	printf("정렬 후 데이터: "); SortArray(data);
	printf("7번 실행 횟수: %d\n", e7);
	printf("8번 실행 횟수: %d\n", e8);

	return 0;
}*/