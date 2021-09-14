/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> //오류

//선택 정렬 함수
void selection_sort(int a[], int n)
{
	int min, minIndex, i, j;
	for (i = 0; i < n - 1; i++) { //i번째부터 n-1번째까지 비교
		minIndex = i; min = a[i];
		for (j = i + 1; j < n; j++) { //i+1번째부터 n까지 비교
			if (min > a[j]) //a[i] > a[j]
				min = a[j]; minIndex = j;
		}
		a[minIndex] = a[i]; //a[i]와 a[j]의 자리 바꿈
		a[i] = min;
	}

	//배열 출력
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
}

int main(void) {

	int list[10] = { 0 };
	//10개의 데이터 입력
	for (int i = 0; i < 10; i++) {
		printf("숫자를 입력하세요: ");
		scanf("%d", &list[i]);
	}

	selection_sort(list, 10);

	return 0;
}*/