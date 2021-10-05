#include <stdio.h>
#define MAX_SIZE 10

//선언(전역)
int busNum[MAX_SIZE];
int baseballNum[MAX_SIZE];
int topBus = -1;
int topBase = -1;

//함수 선언
void pushBus(int item);
int PopBus(void);
int isEmptyBus(void);
int isFullBus(void);

void pushBase(int item);
int PopBase(void);
int isEmptyBase(void);
int isFullBase(void);

int main(void)
{
	//push
	pushBus(100);
	pushBus(200);
	pushBus(300);
	pushBus(400);

	pushBase(1);
	pushBase(2);
	pushBase(3);
	pushBase(4);

	//pop
	int res1; int res2;
	while (!(isEmptyBase() && isEmptyBus())) {
		res1 = PopBus();
		res2 = PopBase();

		printf("value = %d\n", res1);
		printf("value = %d\n", res2);
	}

	return 0;
}

//Bus f
void pushBus(int item)
{
	if (isFullBus()) {
		printf("Stack full\n");
		return;
	}
	busNum[(++topBus)] = item; //topBus +=1; busNum[topBus];
}
int PopBus(void)
{
	if (isEmptyBus()) {
		printf("Stack empty\n");
		exit();
	}
	return busNum[(topBus--)]; //return busNum[topBus]; topBus -= 1;
}
int isEmptyBus(void)
{
	if (topBus == -1) return 1;
	else return 0;
}
int isFullBus(void)
{
	if (topBus >= MAX_SIZE - 1) return 1;
	else return 0;
}

//Baseball f
void pushBase(int item)
{
	if (isFullBase()) {
		printf("stack full\n");
		return;
	}
	else baseballNum[(++topBase)] = item; 
}
int PopBase(void)
{
	if (isEmptyBase()) {
		printf("stack empty\n");
		exit();
	}
	return baseballNum[(topBase--)];
}
int isEmptyBase(void)
{
	if (topBase == -1) return 1;
	else return 0;
}
int isFullBase(void)
{
	if (topBase >= MAX_SIZE - 1) return 1;
	else return 0;
}