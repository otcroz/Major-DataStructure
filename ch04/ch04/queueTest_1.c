#include <stdio.h>
#define MAX_QUEUE_SIZE 100

int queue[MAX_QUEUE_SIZE];

void insertq(int* rear, int front, int item) {
	if (*rear == MAX_QUEUE_SIZE - 1) {
		printf(" => Queue Full\n");
		//exit();
		// 다른 처리방법 ? 큐의 원소를 모두 원쪽으로 이동 ? 
	}
	queue[++*rear] = item; // *rear+=1; queue[*rear] = item;  
}

int deleteq(int* front, int rear) {
	//element e;
	if (*front == rear)
	{
		printf(" => Queue Full\n");
		//exit(); // return an error key 
	}
	return queue[++*front];
}

int first()
{
	int e = { 0 };
	// ... 코드 작성 필요.
	return e;
}
int isempty(int front, int rear)
{
	if (front == rear) return(1); else return(0);
}

int isfull(int front, int rear)
{
	if (rear == (MAX_QUEUE_SIZE - 1)) return(1);
	else return(0);
}


void main(void) // 큐를 테스트하는 프로그램 
{
	int rear = -1; 	int front = -1; 
	int res;
	
	insertq(&rear, front, 1);
	insertq(&rear, front, 2);
	insertq(&rear, front, 3);

	res = deleteq(&front, rear);
	printf(" => Return Value is %d\n", res);
	res = deleteq(&front, rear);
	printf(" => Return Value is %d\n", res);
	res = deleteq(&front, rear);
	printf(" => Return Value is %d\n", res);
}