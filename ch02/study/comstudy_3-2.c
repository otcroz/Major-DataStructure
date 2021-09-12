/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int binsearch(int list[], int searchnum, int left, int right, int* e3)
{
	int middle;
	middle = (left + right) / 2;
	(*e3)++;

	if (searchnum > list[middle])
		left = middle + 1;
	else if (searchnum < list[middle])
		right = middle - 1;
	else if (searchnum == list[middle])
		return middle;

	return -1;
}

void SortArray(int d[])
{
	for (int i = 0; i < 10; i++) {
		printf("%d ", d[i]);
	}
	printf("\n");
}

int main(void)
{
	int list[] = { 9, 15, 16, 19, 21, 39, 51, 55, 76, 85, 99 };
	int searchNum, index, e3 = 0;
	int left = 0, right = 11;

	//이진 검색
	printf("찾을 값을 입력하세요: ");
	scanf("%d", &searchNum);
	index = binsearch(list, searchNum, left, right, &e3);
	

	//출력
	printf("데이터: "); SortArray(list);
	printf("찾을 값: %d \n", searchNum);
	printf("찾을 값의 위치: %d \n", index); // index == -1인 경우 찾는 값X
	printf("3번 문장의 수행 횟수: %d \n", e3);


	return 0;
}*/