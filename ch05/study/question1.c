#include <stdio.h>
#define MAX_STACK_SIZE 10

typedef struct stackelement {
	int bus;
	char player;
}stackelement;


struct stackelement stack[MAX_STACK_SIZE];
int top = -1;

void push(stackelement);
stackelement pop(void);
int isempty(void);
int isfull(void);

int main(void) {

	
	stackelement s1;
	stackelement s2;

	s1.bus = 1000; s1.player = 1;
	s2.bus = 1001; s2.player = 2;
	
	push(s1);
	push(s2);
	stackelement res1 = pop();
	stackelement res2 = pop();

	printf("%d %d\n", res1.bus, res1.player);
	printf("%d %d\n", res2.bus, res2.player);

	pop(); //stack empty 상태에서 수행

	return 0;
}

void push(stackelement item)
{
	if (isfull()) {
		printf("stack full");
	}
	stack[++top] = item;
}
stackelement pop(void)
{
	if (isempty()) {
		printf("stack empty");
	}
	return stack[top--];
}
int isempty(void)
{
	if (top == -1) return 1; else return 0;
}
int isfull(void)
{
	if (top == MAX_STACK_SIZE - 1) return 1; else return 0;
}