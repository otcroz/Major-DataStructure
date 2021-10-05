#include <stdio.h>
#define MAX_SIZE 10

typedef struct baseball {
	int baseNum;
	char baseAlpha;
}baseball;

baseball player[MAX_SIZE];

void insertq(int front, int* rear, baseball item);
baseball deleteq(int* front, int rear);
int isEmpty(int,int);
int isFull(int,int);

int main(void)
{
	int front = -1; int rear = -1;
	baseball p1;

	//insert
	p1.baseNum = 1; p1.baseAlpha = 'A';
	insertq(front, &rear, p1);
	p1.baseNum = 2; p1.baseAlpha = 'B';
	insertq(front, &rear, p1);
	p1.baseNum = 3; p1.baseAlpha = 'C';
	insertq(front, &rear, p1);

	//delete
	int i;
	for (i = 0; i < 3; i++) {
		baseball res = deleteq(&front, rear);
		printf("Number: %d, Alphabet: %c\n", res.baseNum, res.baseAlpha);
	}

	return 0;
}

void insertq(int front, int* rear, baseball item)
{
	if (isFull(front, *rear)) {
		printf("queue full..");
		exit();
	}

	player[++ * rear] = item;
}

baseball deleteq(int* front, int rear)
{
	if (isEmpty(*front, rear)) {
		printf("queue empty..");
		exit();
	}

	return player[++ * front];
}

int isEmpty(int front, int rear)
{
	if (front == rear) return 1;
	else return 0;
}

int isFull(int front, int rear)
{
	if (rear == MAX_SIZE - 1) return 1;
	else return 0;
}