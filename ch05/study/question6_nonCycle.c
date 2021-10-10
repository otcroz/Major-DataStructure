#include <stdio.h>
#define MAX_SIZE 10
int front = -1; int rear = -1;
int queue[MAX_SIZE];

int QueueFull(void);
int QueueEmpty(void);


int main(void)
{
	
	return 0;
}

int QueueFull(void)
{
	if (rear == MAX_SIZE - 1) return 1; else return 0;
}

int QueueEmpty(void)
{
	if (rear == front) return 1; else return 0;
}

int delete(int* front)
{
	if (QueueEmpty()) printf("queue empty");
	else return queue[++ * front];
}

void insert(int* rear)
{
	if (QueueFull()) printf("queue full");
	else return queue[++ * rear];
}