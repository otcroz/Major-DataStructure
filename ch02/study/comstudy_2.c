/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Fibonacci(int n);

int main(void)
{
	int n;
	printf("숫자를 입력하세요: ");
	scanf("%d", &n);

	int res = Fibonacci(n);
	printf("%d", res);

	return 0;
}

int Fibonacci(int n)
{
	if (n == 0) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}
	else {
		return Fibonacci(n - 1) + Fibonacci(n - 2);
	} 
}*/