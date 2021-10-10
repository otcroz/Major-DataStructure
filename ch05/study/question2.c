#include <stdio.h>
#define MAX_QUEUE_SIZE 10

typedef struct queueelement {
	int num;
	char alpha;
}queueelement;

struct queueelement queue[MAX_QUEUE_SIZE];

void insert(int*, queueelement);
queueelement delete(int*);
int isempty(void);
int isfull(void);

int front = -1; int rear = -1;

int main(void)
{
	queueelement c1, c2, c3;
	c1.num = 1; c1.alpha = 'A';
	c2.num = 2; c2.alpha = 'B';
	c3.num = 3; c3.alpha = 'C';

	insert(&rear, c1);
	insert(&rear,  c2);
	insert(&rear,  c3);

	queueelement res1 = delete(&front);
	queueelement res2 = delete(&front);
	queueelement res3 = delete(&front);

	printf("%d %c \n", res1.num, res1.alpha);
	printf("%d %c \n", res2.num, res2.alpha);
	printf("%d %c \n", res3.num, res3.alpha);


	return 0;
}

void insert(int* rear, queueelement item)
{
	//isfull
	if (isfull()) {
		printf("queue full");
		exit();
	}
	//insert
	queue[++ * rear] = item;
}
queueelement delete(int* front)
{
	//isempty
	if (isempty()) {
		printf("queue empty");
	}
	//insert
	return queue[++ * front];
}
int isempty(void)
{
	//empty?
	if (rear == front) return 1; else return 0;
}
int isfull(void)
{
	//full?
	if (rear == MAX_QUEUE_SIZE - 1) return 1; else return 0;
}