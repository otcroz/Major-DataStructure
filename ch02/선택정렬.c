/*#include <stdio.h>

void select_sort(int*);
void PrintArray(int*);

int main(void)
{
	int data[10] = {10, 13, 25, 15, 4, 20, 5, 29, 14, 21};

	//���� �� ������
	PrintArray(data);

	//���� ����
	select_sort(data);

	//���� �� ������
	PrintArray(data);

	return 0;
}

void select_sort(int* data)
{
	int i, j, minIndex, temp;
	for (i = 0; i < 9; i++) {
		minIndex = i;
		for (j = i + 1; j < 10; j++) {
			if (data[minIndex] > data[j])
				minIndex = j;
		}
		temp = data[i]; data[i] = data[minIndex]; data[minIndex] = temp;
	}
	printf("\n");
}

void PrintArray(int* data)
{
	for (int i=0; i < 10; i++)
		printf("%d ", data[i]);
	printf("\n");
}*/