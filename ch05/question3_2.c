
/* 프로그램 5-1 중위식-후위식 변환 : infixtopostfix.c */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#define MAX_STACK_SIZE 100 /* maximum stack size */
#define MAX_EXPR_SIZE 100 /* max size of expression */

/*typedef enum {
	lparen, rparen, plus, minus, times, divide,
	mod, eos, operand
} precedence;*/

char expr[MAX_EXPR_SIZE]; /* input string */
int top = -1;

int stack[MAX_STACK_SIZE];
/* isp and icp arrays ? index is value of precedence lparen, rparen,
	plus, minus, times, divide, mode, eos */

void push(char item)
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

int get_token(char* symbol, int* n) {
	*symbol = expr[(*n)++];
	switch (*symbol) {
	case '(': return 0;
	case ')': return 1;
	case '+': return 2;
	case '-': return 3;
	case '/': return 4;
	case '*': return 5;
	case '%': return 6;
	case ' ': return 7;
	default: return 8; //operand
	}
}

void print_token(int t) {
	switch (t) {
	case 0: printf("( "); break;
	case 1: printf(") "); break;
	case 2: printf("+ "); break;
	case 3: printf("- "); break;
	case 4: printf("/ "); break;
	case 5: printf("* "); break;
	case 6: printf("% "); break;
	case 7: printf("eos "); break;
	default: printf("\n "); break; //?
	}
}

int convertCharInt(int n)
{
	switch (n) {
	case '(': return 0;
	case ')': return 1;
	case '+': return 2;
	case '-': return 3;
	case '/': return 4;
	case '*': return 5;
	case '%': return 6;
	case ' ': return 7;
	default: return 8; //operand
	}
}

char stackSymbol[] = { '(', ')', '+','-','/','*','%',' ','o' }; //char 포인터 배열

void postfix(void) {
	char symbol;
	int token;
	int n = 0;
	top = 0;
	stack[0] = stackSymbol[7]; // 스택의 바닥에 공백(eos)를 넣는다.
	for (token = get_token(&symbol, &n); stackSymbol[token] != ' '; token = get_token(&symbol, &n))
	{
		if (stackSymbol[token] == 'o') printf("%c ", symbol);
		else if (stackSymbol[token] == ')') {  // 오른쪽 괄호 만나면 스택에서 모두 pop..
			while (stack[top] != '(')
				print_token(convertCharInt(pop())); //수정
			pop();
		}
		else { // 연산자들의 우선 순위 비교..
			while (isp[convertCharInt(stack[top])] >= icp[token]) //수정
				print_token(convertCharInt(pop())); //수정
			push(stackSymbol[token]);
		}
	}
	while (stackSymbol[token = convertCharInt(pop())] != ' ')
		print_token(token);
	printf(" \n");
}

int main()
{
	strcpy(expr, "3*(2+4)/4 "); // 입력의 마지막에 공백(eos)을 둔다.
	postfix();
}
