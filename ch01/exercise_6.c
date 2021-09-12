#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

void compute(int*, int, double*, double*, int*);
void display(void);

int main(void) {
	int i;
	time_t t;
	int data[100];

	int discard = 0, exceedAvg = 0;
	double avg = 0, variance = 0;

	//데이터 입력받기(난수 발생)
	time(&t); srand(t);
	for (i = 0; i < 100; i++) {
		data[i] = (rand() % 500);
		if (data[i] < 100 || data[i] >400) { 
			data[i] = 200; //150
			discard += 1;
		}
	}
	//함수 호출
	compute(data, 100, &avg, &variance, &exceedAvg);

	//데이터 처리 결과 출력
	display();
	for (int i = 0; i < 100; i++) {
		printf("%d ", data[i]);
	}
	printf("\n");
	printf("평균: %f\n", avg);
	printf("분산: %f\n", variance);
	printf("버려진 값의 개수: %d\n", discard);
	printf("평균 값보다 값이 큰 데이터: %d\n", exceedAvg);

	return 0;
}

void compute(int* a, int n, double* avg, double* variance, int* exceedAvg)
{
	int sum = 0, i;

	//합계
	for (i = 0; i < n; i++) 
		sum += a[i];
	
	//평균
	*avg = (double)sum / 100;

	//분산
	for (i = 0; i < n; i++) 
		*variance += (a[i] - *avg) * (a[i] - *avg);
	
	*variance = *variance / 100;

	//평균보다 상회하는 값
	for (i = 0; i < n; i++) {
		if (a[i] > *avg) {
			*exceedAvg += 1;
		}
	}
}

void display(void)
{
	printf("==========================================================================================\n");
	printf("수행 환경: Microsoft Visual Studio\n");
	printf("운영체제 및 컴퓨터 기종: windows, Lenovo\n");
	printf("프로그램을 실행하면 임의의 값이 100개가 발생합니다. 값은 0부터 500사이의 값을 가집니다.\n");
	printf("데이터의 값이 100보다 작거나 400보다 크면 원래 값을 버린 후, 값을 200으로 정합니다.\n");
	printf("발생한 임의의 100개의 값의 평균, 분산, 버려진 값의 개수, 평균 값보다 큰 데이터 개수를 출력합니다.\n");
	printf("==========================================================================================\n");

}