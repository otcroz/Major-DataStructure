#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

void compute(int*, int, double*, double*, int*);
void display(void);

int main(void) {
	int i;
	time_t t;
	int data[100];

	int discard = 0, exceedAvg = 0;
	double avg = 0, variance = 0;

	//������ �Է¹ޱ�(���� �߻�)
	time(&t); srand(t);
	for (i = 0; i < 100; i++) {
		data[i] = (rand() % 500);
		if (data[i] < 100 || data[i] >400) { 
			data[i] = 200; //150
			discard += 1;
		}
	}
	//�Լ� ȣ��
	compute(data, 100, &avg, &variance, &exceedAvg);

	//������ ó�� ��� ���
	display();
	for (int i = 0; i < 100; i++) {
		printf("%d ", data[i]);
	}
	printf("\n");
	printf("���: %f\n", avg);
	printf("�л�: %f\n", variance);
	printf("������ ���� ����: %d\n", discard);
	printf("��� ������ ���� ū ������: %d\n", exceedAvg);

	return 0;
}

void compute(int* a, int n, double* avg, double* variance, int* exceedAvg)
{
	int sum = 0, i;

	//�հ�
	for (i = 0; i < n; i++) 
		sum += a[i];
	
	//���
	*avg = (double)sum / 100;

	//�л�
	for (i = 0; i < n; i++) 
		*variance += (a[i] - *avg) * (a[i] - *avg);
	
	*variance = *variance / 100;

	//��պ��� ��ȸ�ϴ� ��
	for (i = 0; i < n; i++) {
		if (a[i] > *avg) {
			*exceedAvg += 1;
		}
	}
}

void display(void)
{
	printf("==========================================================================================\n");
	printf("���� ȯ��: Microsoft Visual Studio\n");
	printf("�ü�� �� ��ǻ�� ����: windows, Lenovo\n");
	printf("���α׷��� �����ϸ� ������ ���� 100���� �߻��մϴ�. ���� 0���� 500������ ���� �����ϴ�.\n");
	printf("�������� ���� 100���� �۰ų� 400���� ũ�� ���� ���� ���� ��, ���� 200���� ���մϴ�.\n");
	printf("�߻��� ������ 100���� ���� ���, �л�, ������ ���� ����, ��� ������ ū ������ ������ ����մϴ�.\n");
	printf("==========================================================================================\n");

}