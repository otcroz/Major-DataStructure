#include <stdio.h>

void sub1(int x, int y, int z);
void sub2(int* x, int* y, int* z);

int main(void)
{
	//int�� ������ �Ű������� ���
	int a1, b1, c1;
	a1 = 2; b1 = 3; c1 = 4;

	sub1(a1, b1, c1);
	printf("%d %d %d\n", a1, b1, c1); //���� ��ȭX

	//int�� ������ ������ �Ű������� ���
	int a2, b2, c2;
	a2 = 2; b2 = 3; c2 = 4;

	sub2(&a2, &b2, &c2);
	printf("%d %d %d\n", a2, b2, c2); //���� ��ȭO

	return 0;
}

void sub1(int x, int y, int z) {
	y = y + z;
	z = z + x;
}
void sub2(int* x, int* y, int* z) {
	*y = *y + *z;
	*z = *z + *x;
}