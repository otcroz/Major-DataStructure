/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
	int x, y, z;
	//�� �Է¹ޱ�
	printf("x���� �Է��ϼ���: ");
	scanf("%d", &x);
	printf("y���� �Է��ϼ���: ");
	scanf("%d", &y);
	printf("z���� �Է��ϼ���: ");
	scanf("%d", &z);

	//�˰��� �ۼ�
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

	//3���� ���� ���(��������)
	printf("%d %d %d", max, med, min);

	return 0;
}*/