/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int binsearch(int list[], int searchnum, int left, int right, int* e3)
{
	int middle;
	middle = (left + right) / 2;
	(*e3)++;

	if (searchnum > list[middle])
		left = middle + 1;
	else if (searchnum < list[middle])
		right = middle - 1;
	else if (searchnum == list[middle])
		return middle;

	return -1;
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
	int list[] = { 9, 15, 16, 19, 21, 39, 51, 55, 76, 85, 99 };
	int searchNum, index, e3 = 0;
	int left = 0, right = 11;

	//���� �˻�
	printf("ã�� ���� �Է��ϼ���: ");
	scanf("%d", &searchNum);
	index = binsearch(list, searchNum, left, right, &e3);
	

	//���
	printf("������: "); SortArray(list);
	printf("ã�� ��: %d \n", searchNum);
	printf("ã�� ���� ��ġ: %d \n", index); // index == -1�� ��� ã�� ��X
	printf("3�� ������ ���� Ƚ��: %d \n", e3);


	return 0;
}*/