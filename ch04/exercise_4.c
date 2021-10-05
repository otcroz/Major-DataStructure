#include <stdio.h>
#define MAX 100
typedef struct { int key; } element;
element stack[MAX];

void push(int*, element);
element pop(int*);
element top(int*);

void push(int* top, element item)
{
	if (*top == MAX - 1) exit();
	stack[++*top] = item; /*1*/
}

element pop(int* top) /*pop 함수 작성*/
{
	if (*top == -1) exit();
	return stack[*top--];  
}

element top(int* top) {
	element item;
	if (*top == -1) {
		item.key = 0;
		return item; //스택이 비었을 때 키값을 0으로 반환
	}
	else {
		return stack[*top];
	}
}

int main(void)
{
	element item;
	int top = -1;
	item.key = 5;

	push(&top, item);

	element res = pop(&top);
	printf("%d", res.key);
	

	return 0;
}