

/* 프로그램 5-1 중위식-후위식 변환 : infixtopostfix.c */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#define MAX_STACK_SIZE 100 /* maximum stack size */
#define MAX_EXPR_SIZE 100 /* max size of expression */

typedef enum {
	lparen, rparen, plus, minus, times, divide,
	mod, eos, operand
} precedence;

char expr[MAX_EXPR_SIZE]; /* input string */
int top = -1;

precedence stack[MAX_STACK_SIZE];
char result[MAX_EXPR_SIZE];
int i = 0;

void pushInfix(precedence item)
{
	if (top >= MAX_STACK_SIZE - 1) {
		printf("stack_full()\n");
		return;
	}
	stack[++top] = item;
}

precedence popInfix() {
	if (top == -1)
	{
		printf("stack_empty()\n");
	}
	return stack[(top)--];
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
static int icp[] = { 20,19,12,12,13,13,13,0 }; // lparen 연산자 우선순위 조정

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

precedence print_token(precedence  t) {
	switch (t) {
	case lparen: printf("( "); result[i++] = '(';  break;
	case rparen: printf(") "); result[i++] = ')'; break;
	case plus: printf("+ "); result[i++] = '+'; break;
	case minus: printf("- "); result[i++] = '-'; break;
	case divide: printf("/ "); result[i++] = '/'; break;
	case times: printf("* "); result[i++] = '*'; break;
	case mod: printf("% "); result[i++] = '%'; break;
	case eos: printf("eos "); result[i++] = ' '; break;
	default: printf("\n "); return(0);
	}
}

void postfix(void) {
	char symbol;
	precedence token;
	int n = 0;
	top = 0;
	stack[0] = eos; // 스택의 바닥에 공백(eos)를 넣는다.
	for (token = get_token(&symbol, &n); token != eos; token = get_token(&symbol, &n))
	{
		if (token == operand) { printf("%c ", symbol); result[i++] = symbol; }
		else if (token == rparen) {  // 오른쪽 괄호 만나면 스택에서 모두 pop..
			while (stack[top] != lparen)
				print_token(popInfix());
			popInfix();
		}
		else { // 연산자들의 우선 순위 비교..
			while (isp[stack[top]] >= icp[token])
				print_token(popInfix());
			pushInfix(token);
		}
	}
	while ((token = popInfix()) != eos)
		print_token(token);
	printf(" \n");
	result[i++] = ' ';
}

/* 프로그램 5-2 후위식 계산 : postfixeval.c */


char expr[MAX_EXPR_SIZE]; /* input string */

int stack[MAX_STACK_SIZE];

void push(int item)
{
	if (top >= MAX_STACK_SIZE - 1) {
		printf("stack_full()\n");
		return;
	}
	stack[++top] = item;
}

int pop() {
	if (top == -1)
	{
		printf("stack_empty()\n"); //exit();
	}
	return stack[(top)--];
}

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
	strcpy(expr, "3+2 "); // 입력의 마지막에 공백(eos)을 둔다.
	postfix();
	
	strcpy(expr, result);
	printf("* Begin evaluation ... %s\n", expr);
	printf("* The result is => %d\n", eval());


}