#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//함수의 위치 바꿔도 결과 똑같이 출력됨

int main(void) 
{
	int a;
	printf("\nInput number->");
	scanf("%d", &a);
	printf("\nSigma 1 to %d is %d", a, sigma(a));

	return 0;
}

int sigma(int n)
{
	int r;
	for (r = 0; n > 0; n--)
		r += n;
	return r;
}