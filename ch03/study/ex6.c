#define MAX_SIZE 10

void printMatrix(int matrix[][MAX_SIZE], int rows, int cols)
{
	int i, j, count = 0;
	for (i = 0; i < rows; i++) {
		count++;
		for (j = 0; j < cols; j++) {
			//printf("%d", matrix[i][j]);
			count++;
		}
	}
}
//(a) count 추가
//(b) 명령문 제거, 단순화
//(c) count 횟수 = rows * cols
//(d) 테이블 작성