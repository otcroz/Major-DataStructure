/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> //srand, rand�� ����ϱ� ���� �������
#include <time.h> // time�� ����ϱ� ���� �������
#define NUM 10

void selection_sort(int*); //��������
int binsearch(int* , int); //���� �˻�

int main(void)
{
	int data[NUM] = { 0 };

	srand(time(NULL)); // ���� �ʱ�ȭ
	for (int i = 0; i < NUM; i++) // 10ȸ �ݺ�
	{
		data[i] = rand() % 10 + 1; // 1 ~ 10 ������ ���ڸ� �̾Ƽ� random ������ ����
	}

	//���� ����
	selection_sort(data);
	for (int i = 0; i < NUM; i++) 
		printf("%d ", data[i]);
	printf("\n");

	//���� �˻�
	int searchNum;
	printf("ã���� �ϴ� ���� �Է��ϼ���: ");
	scanf("%d", &searchNum);

	int index = binsearch(data, searchNum);
	if (index == -1) {
		printf("ã���� �ϴ� ���� �����ϴ�.");
	}
	else {
		printf("�ε��� ��: %d", index);
	}

	return 0;
}

void selection_sort(int* a)
{
	int i, j, min, minIndex, temp;
	for (i = 0; i < NUM-1; i++) {
		min = a[i]; minIndex = i; //�ʱ�ȭ
		for (j = i + 1; j < NUM; j++) {
			if (a[minIndex] > a[j]) 
				minIndex = j;
		}
		temp = a[i];
		a[i] = a[minIndex];
		a[minIndex] = temp;
	}
}

int binsearch(int* a, int searchNum) 
{
	int left = 0, right = 9, middle;
	while (left <= right) {
		middle = (left + right) / 2;
		if (searchNum > a[middle]) {
			left = middle + 1;
		}
		else if (searchNum < a[middle]) {
			right = middle - 1;
		}
		else {
			return middle;
		}
	}
	return -1;
}*/