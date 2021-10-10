#include <stdio.h>
#define MAX_SIZE 10
int front = 0; int rear = 0;
int queue[MAX_SIZE];

int queueFull(void);
int queueEmpty(void);

int main(void)
{



	return 0;
}

int queueFull(void)
{
	if (rear == MAX_SIZE - 1) return 1; else return 0;
}
int queueEmpty(void)
{
	if (rear == front) return 1; else return 0;
}

int delete(int* front, int item)
{
	*front = *(front + 1) % MAX_SIZE;
	if (queueEmpty()) printf("queue empty");
	else return queue[*front];
}

void insert(int* rear, int item)
{
	*rear = *(rear + 1) % MAX_SIZE;
	if (queueFull()) printf("queue full");
	else queue[*rear] = item;
}