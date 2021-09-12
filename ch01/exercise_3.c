/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int IterativeCal(int); //반복 알고리즘 함수
int RecursiveCal(int, int); //순환 알고리즘 함수

int main(void) {
	int n;
	printf("팩토리얼 계산: 숫자를 입력하세요>>");
	scanf("%d", &n);

	//반복 알고리즘
	int res1 = IterativeCal(n);

	//순환 알고리즘
	int res2 = RecursiveCal(n,1);

	printf("%d %d", res1, res2);

	return 0;
}

int IterativeCal(int n)
{
	int sum = 1;
	while (n >= 1) {
		sum *= n;
		n--;
	}
	return sum;
}
int RecursiveCal(int n, int sum) //모든 제어 경로에서 값을 반환X?
{
	if (n >= 1) {
		sum *= n;
		RecursiveCal(n - 1, sum);
	}
	else
		return sum;
}*/