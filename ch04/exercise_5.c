#include <stdio.h>
#define MAX_QUEUE_SIZE 100
typedef struct {
	int key;

} element;

element queue[MAX_QUEUE_SIZE];

void insertq(int* rear, element item);
element deleteq(int* front, int rear);


int main(void)
{
	int rear = -1;
	int front = -1;
	element e1;

	e1.key = 5; insertq(&rear, e1); /*1*/

	element res = deleteq(&front, rear); /*2*/
	printf("%d", res.key);

	return 0;
}

void insertq(int* rear, element item) {
	if (*rear == MAX_QUEUE_SIZE - 1) { /*3*/
		printf("Queue Full"); exit(); /*4*/
	}
	queue[++ * rear] = item;
}

element deleteq(int* front, int rear) {
	if (*front == rear)
		printf(" => Queue Empty\n");
	return queue[++ * front];
}