
/* 프로그램 5-2 후위식 계산 : postfixeval.c */
#define _CRT_SECURE_NO_WARNINGS // Visual Studio 2013 용
#include <stdio.h>
#include <string.h>
#include <math.h>
#define MAX_STACK_SIZE 100 /* maximum stack size */
#define MAX_EXPR_SIZE 100 /* max size of expression */

typedef enum {
	lparen, rparen, plus, minus, times, divide,
	mod, eos, operand
} precedence;

char expr[MAX_EXPR_SIZE]; /* input string */
int top = -1;

int stack[MAX_STACK_SIZE];

//메서드
void push(int item);
int pop(void);
int isfull(void);
int isempty(void);
precedence get_token(char* symbol, int* n);
precedence print_token(precedence t);
void print_stack(int stack[]);

int eval(void)
{
	precedence token;
	char symbol;
	int op1, op2;
	int n = 0;
	top = -1;
	token = get_token(&symbol, &n);
	while (token != eos) {
		if (token == operand)
			push(symbol - '0');
		else {
			op2 = pop();
			op1 = pop();
			switch (token) {
			case plus: push(op1 + op2); break;
			case minus: push(op1 - op2); break;
			case times: push(op1 * op2); break;
			case divide: push(op1 / op2); break;
			case mod: push(op1 % op2);
			}
		}
		token = get_token(&symbol, &n);
	}
	return pop();
}

int main()
{
	strcpy(expr, "33/4-56*+34*- ");
	printf("* Begin evaluation ... %s\n", expr);
	printf("* The result is => %d\n", eval());
}

void push(int item)
{
	if (top >= MAX_STACK_SIZE - 1) {
		printf("stack_full()\n");
		return;
	}
	stack[++top] = item;
	print_stack(stack); //print stack
}

int pop() {
	if (top == -1)
	{
		printf("stack_empty()\n"); //exit();
	}
	int popElement = stack[(top)--];
	print_stack(stack);
	return popElement;
}

int isempty()
{
	if (top == -1) return(1); else return(0);
}

int isfull()
{
	if (top >= MAX_STACK_SIZE - 1) return(1); else return(0);
}
static int isp[] = { 0,19,12,12,13,13,13,0 };
static int icp[] = { 20,19,12,12,13,13,13,0 };

precedence get_token(char* symbol, int* n) {
	*symbol = expr[(*n)++];
	switch (*symbol) {
	case '(': return lparen;
	case ')': return rparen;
	case '+': return plus;
	case '-': return minus;
	case '/': return divide;
	case '*': return times;
	case '%': return mod;
	case ' ': return eos;
	default: return operand;
	}
}

precedence print_token(precedence t) {
	switch (t) {
	case lparen: printf("("); break;
	case rparen: printf(")"); break;
	case plus: printf("+"); break;
	case minus: printf("-"); break;
	case divide: printf("/"); break;
	case times: printf("*"); break;
	case mod: printf("%"); break;
	case eos: printf("eos"); break;
	default: printf("\n");
	}
}

void print_stack(int stack[]) {
	int element, i;
	printf("\nStack >> ");
	for (i = 0; i <= top; i++) {
		element = stack[i];
		printf("%d ", element);
	}
}