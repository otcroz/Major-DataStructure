#define MAX_SIZE 10

void printMatrix(int a[][MAX_SIZE], int b[][MAX_SIZE], int c[][MAX_SIZE])
{
	int i, j, k, count = 0;
	for (i = 0; i < MAX_SIZE; i++) {
		count++;
		for (j = 0; j < MAX_SIZE; j++) {
			count++;
			for (k = 0; k < MAX_SIZE; k++) {
				count++;
				//c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
}
//(a) count �߰�
//(b) ��ɹ� ����, �ܼ�ȭ
//(c) count Ƚ�� = MAX_SIZE*MAX_SIZE*MAX_SIZE
//(d) ���̺� �ۼ�