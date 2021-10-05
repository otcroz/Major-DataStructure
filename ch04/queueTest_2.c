#include <stdio.h>
#define MAX_SIZE 5

int queueBaseNum[MAX_SIZE]; //전역 선언

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

	printf("queue를 비웠습니다..\n");

	//큐가 비어있는 상태에서 delete
	front = -1; rear = -1;

	deleteq(&front, rear);
	

	return 0;
}

void insertq(int front, int* rear, int item)
{
	if (isFull(front, *rear)) {
		printf("queue full..\n");
		//exit(); 실행 확인을 위해 주석처리
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