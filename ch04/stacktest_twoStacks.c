/* DBLAB stacktest.c */
#include <stdio.h>
#define MAX_STACK_SIZE 100

int stack1[MAX_STACK_SIZE];
int stack2[MAX_STACK_SIZE];
int top1 = -1;
int top2 = -1;

//stack1

void push1(int item)
{
	if (top >= MAX_STACK_SIZE - 1) {
		printf("stack_full()\n");
		return;
	}
	stack1[++top1] = item;
}

int pop1() {
	if (top == -1)
	{
		printf("stack_empty()\n"); exit();
	}
	return stack1[(top1)--];
}

int isempty1()
{
	if (top1 == -1) return(1); else return(0);
}

int isfull1()
{
	if (top1 >= MAX_STACK_SIZE - 1) return(1); else return(0);
}

//stack2

void push2(int item)
{
	if (top2 >= MAX_STACK_SIZE - 1) {
		printf("stack_full()\n");
		return;
	}
	stack2[++top2] = item;
}

int pop2() {
	if (top == -1)
	{
		printf("stack_empty()\n"); exit();
	}
	return stack2[(top2)--];
}

int isempty2()
{
	if (top2 == -1) return(1); else return(0);
}

int isfull2()
{
	if (top2 >= MAX_STACK_SIZE - 1) return(1); else return(0);
}

int main()
{
	int e;
	push1(20);
	push1(40);
	push1(60);

	printf(" Begin Stack1 Test ...\n");
	while (!isempty1())
	{
		e = pop1();
		printf("value = %d\n", e);
	}

	push2(10);
	push2(30);
	push2(50);

	printf(" Begin Stack2 Test ...\n");
	while (!isempty2())
	{
		e = pop2();
		printf("value = %d\n", e);
	}
}