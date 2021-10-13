#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define ROW_MAX 10 //�Լ� �̸� ���� �ִ� ����
#define COL_MAX 15 //�Լ� ���� �� ����

double fCycle(int n, int r);
double fRoop(int n, int r);

int stackEmpty(void);
void push(void);
void pop(void);

char stack[ROW_MAX][COL_MAX];
int rn = -1;
double fCycleRes = 1;
double fRoopRes = 1;

int main(void)
{
	printf("%f \n", fCycle(5, 3)/3); 
	printf("%f \n", fRoop(5, 3));

	for (int i = 0; i<=rn; i++) {
		printf("%s", stack[i]);
	}

	if (rn == -1) //������ ������� Ȯ��
		printf("empty stack");

	return 0;
}

double fCycle(int n, int r) { //��ȯ�Լ�

	push();
	if (n - r < 0) {
		fCycleRes = 1;
	}
	else {
		fCycleRes =  n * fCycle(n - 1, r);
	}
	pop();
	return fCycleRes;
}

double fRoop(int n, int r) { //�ݺ��Լ�
	push();
	for (int i = n; i - r >= 0; i--) {
		fRoopRes *= i;
	}
	pop();
	return fRoopRes / r;
}

/*int stackEmpty(void)
{
	if (rn == -1) return 1; else return 0;
}*/

void push(void)
{
	if (rn == ROW_MAX - 1) printf("full stack");

	strcpy(stack[++rn], "fCycle\n");
	printf("push~!\n");
}

void pop(void)
{
	if (rn == -1) printf("empty stack");
	strcpy(stack[rn--], "null");
	printf("pop!~!\n");
}