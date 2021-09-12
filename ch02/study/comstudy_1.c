/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> //srand, rand를 사용하기 위한 헤더파일
#include <time.h> // time을 사용하기 위한 헤더파일
#define NUM 10

void selection_sort(int*); //선택정렬
int binsearch(int* , int); //이진 검색

int main(void)
{
	int data[NUM] = { 0 };

	srand(time(NULL)); // 난수 초기화
	for (int i = 0; i < NUM; i++) // 10회 반복
	{
		data[i] = rand() % 10 + 1; // 1 ~ 10 사이의 숫자를 뽑아서 random 변수에 저장
	}

	//선택 정렬
	selection_sort(data);
	for (int i = 0; i < NUM; i++) 
		printf("%d ", data[i]);
	printf("\n");

	//이진 검색
	int searchNum;
	printf("찾고자 하는 값을 입력하세요: ");
	scanf("%d", &searchNum);

	int index = binsearch(data, searchNum);
	if (index == -1) {
		printf("찾고자 하는 값이 없습니다.");
	}
	else {
		printf("인덱스 값: %d", index);
	}

	return 0;
}

void selection_sort(int* a)
{
	int i, j, min, minIndex, temp;
	for (i = 0; i < NUM-1; i++) {
		min = a[i]; minIndex = i; //초기화
		for (j = i + 1; j < NUM; j++) {
			if (a[minIndex] > a[j]) 
				minIndex = j;
		}
		temp = a[i];
		a[i] = a[minIndex];
		a[minIndex] = temp;
	}
}

int binsearch(int* a, int searchNum) 
{
	int left = 0, right = 9, middle;
	while (left <= right) {
		middle = (left + right) / 2;
		if (searchNum > a[middle]) {
			left = middle + 1;
		}
		else if (searchNum < a[middle]) {
			right = middle - 1;
		}
		else {
			return middle;
		}
	}
	return -1;
}*/