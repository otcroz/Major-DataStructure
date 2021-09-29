#include <stdio.h>
#define MAX_SIZE 5

int queueBaseNum[MAX_SIZE]; //���� ����

void insertq(int front, int* rear, int item);
int deleteq(int* front, int rear);
int isFull(int, int);
int isEmpty(int, int);

int main(void)
{
	int front = -1; int rear = -1;

	//insert
	int i;
	for (i = 0; i < 6; i++) {
		insertq(front, &rear, i + 1);
	}

	printf("queue�� ������ϴ�..\n");

	//ť�� ����ִ� ���¿��� delete
	front = -1; rear = -1;

	deleteq(&front, rear);
	

	return 0;
}

void insertq(int front, int* rear, int item)
{
	if (isFull(front, *rear)) {
		printf("queue full..\n");
		//exit(); ���� Ȯ���� ���� �ּ�ó��
	}
	queueBaseNum[++ * rear] = item; // *rear += 1; queueBaseNum[*rear] = item;
}

int deleteq(int* front, int rear)
{
	if (isEmpty(*front, rear)) {
		printf("queue empty..\n");
		//exit();
	}
	return queueBaseNum[++ * front];
}

int isFull(int front, int rear)
{
	if (rear == MAX_SIZE - 1) return 1;
	else return 0;
}

int isEmpty(int front, int rear)
{
	if (rear == front) return 1;
	else return 0;
}