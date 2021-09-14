/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
	int x, y, z;
	//값 입력받기
	printf("x값을 입력하세요: ");
	scanf("%d", &x);
	printf("y값을 입력하세요: ");
	scanf("%d", &y);
	printf("z값을 입력하세요: ");
	scanf("%d", &z);

	//알고리즘 작성
	int max; int med; int min;
	
	if (x > y) {
		max = x;
		med = y;
		if (max > z) {
			if (med > z) {
				min = z;
			}
			else {
				min = med;
				med = z;	
			}
		}
		else {
			max = z;
			med = x;
			min = y;
		}
	}
	else {
		max = y;
		med = x;
		if (max > z) {
			if (med > z) {
				min = z;
			}
			else {
				min = med;
				med = z;
			}
		}
		else {
			max = z;
			med = y;
			min = x;
		}
	}

	//3개의 숫자 출력(내림차순)
	printf("%d %d %d", max, med, min);

	return 0;
}*/