/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void PrintArray(int*);
int BinarySearch(int*, int);

int main(void)
{
	int data[11] = { 9,15,16,19,21,39,51,65,76,85,99 };
	int SearchNum;
	//SearchNum �ޱ�
	printf("�˻��Ϸ��� ���� �Է��ϼ���.");
	scanf("%d", &SearchNum);

	//������ ���
	PrintArray(data);

	//���� �˻�
	int res = BinarySearch(data, SearchNum);

	//��� ���
	if (res == -1) {
		printf("�˻����� �������� �ʽ��ϴ�.");
	}
	else {
		printf("�˻��� %d ��ġ�� data[%d]�� �ֽ��ϴ�.", SearchNum, res);
	}

	return 0;
}

void PrintArray(int* data)
{
	for (int i = 0; i < 11; i++)
		printf("%d ", data[i]);
	printf("\n");
}

int  BinarySearch(int* data, int sn)
{
	int left = 0, right = 10, middle;
	while (left <= right) {
		middle = (left + right) / 2;
		if (data[middle] < sn) left = middle + 1;
		else if (data[middle] > sn) right = middle - 1;
		else if (data[middle] == sn) return middle;
	}

	return -1;
}*/