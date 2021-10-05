#include <stdio.h>
#define MAX_SIZE 10

//선언(전역)
typedef struct {
	int baseNum;
	char baseAlpha;
}stackelement;

stackelement stack[MAX_SIZE];
int top = -1;

//함수 선언
void push(int, char);
stackelement Pop(void);
int isEmpty(void);
int isFull(void);

int main(void)
{
	//push
	push(100, 'A');
	push(200, 'B');
	push(300, 'C');
	push(400, 'D');

	//pop
	stackelement res; 
	while (!isEmpty()) {
		res = Pop();
		printf("value(name, alpha) = %d %c\n", res.baseNum, res.baseAlpha);
	}

	return 0;
}

void push(int n, char a)
{
	if (isFull()) {
		printf("Stack full\n");
		return;
	}
	top += 1;
	stack[top].baseNum = n; stack[top].baseAlpha = a;
}
stackelement Pop(void)
{
	if (isEmpty()) {
		printf("Stack empty\n");
		exit();
	}
	return stack[(top--)]; //return busNum[topBus]; topBus -= 1;
}
int isEmpty(void)
{
	if (top == -1) return 1;
	else return 0;
}
int isFull(void)
{
	if (top >= MAX_SIZE - 1) return 1;
	else return 0;
}
