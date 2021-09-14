/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void PrintArray(int*);
int BinarySearch(int*, int);

int main(void)
{
	int data[11] = { 9,15,16,19,21,39,51,65,76,85,99 };
	int SearchNum;
	//SearchNum 받기
	printf("검색하려는 값을 입력하세요.");
	scanf("%d", &SearchNum);

	//데이터 출력
	PrintArray(data);

	//이진 검색
	int res = BinarySearch(data, SearchNum);

	//결과 출력
	if (res == -1) {
		printf("검색값이 존재하지 않습니다.");
	}
	else {
		printf("검색값 %d 위치는 data[%d]에 있습니다.", SearchNum, res);
	}

	return 0;
}

void PrintArray(int* data)
{
	for (int i = 0; i < 11; i++)
		printf("%d ", data[i]);
	printf("\n");
}

int  BinarySearch(int* data, int sn)
{
	int left = 0, right = 10, middle;
	while (left <= right) {
		middle = (left + right) / 2;
		if (data[middle] < sn) left = middle + 1;
		else if (data[middle] > sn) right = middle - 1;
		else if (data[middle] == sn) return middle;
	}

	return -1;
}*/