/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> //����

//���� ���� �Լ�
void selection_sort(int a[], int n)
{
	int min, minIndex, i, j;
	for (i = 0; i < n - 1; i++) { //i��°���� n-1��°���� ��
		minIndex = i; min = a[i];
		for (j = i + 1; j < n; j++) { //i+1��°���� n���� ��
			if (min > a[j]) //a[i] > a[j]
				min = a[j]; minIndex = j;
		}
		a[minIndex] = a[i]; //a[i]�� a[j]�� �ڸ� �ٲ�
		a[i] = min;
	}

	//�迭 ���
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
}

int main(void) {

	int list[10] = { 0 };
	//10���� ������ �Է�
	for (int i = 0; i < 10; i++) {
		printf("���ڸ� �Է��ϼ���: ");
		scanf("%d", &list[i]);
	}

	selection_sort(list, 10);

	return 0;
}*/