/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int IterativeCal(int); //�ݺ� �˰��� �Լ�
int RecursiveCal(int, int); //��ȯ �˰��� �Լ�

int main(void) {
	int n;
	printf("���丮�� ���: ���ڸ� �Է��ϼ���>>");
	scanf("%d", &n);

	//�ݺ� �˰���
	int res1 = IterativeCal(n);

	//��ȯ �˰���
	int res2 = RecursiveCal(n,1);

	printf("%d %d", res1, res2);

	return 0;
}

int IterativeCal(int n)
{
	int sum = 1;
	while (n >= 1) {
		sum *= n;
		n--;
	}
	return sum;
}
int RecursiveCal(int n, int sum) //��� ���� ��ο��� ���� ��ȯX?
{
	if (n >= 1) {
		sum *= n;
		RecursiveCal(n - 1, sum);
	}
	else
		return sum;
}*/