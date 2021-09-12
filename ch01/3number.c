#include <stdio.h>

int main(void) {
	int x, y, z;
	int max, min, med;
	x = 50; y = 43; z = 45;

	if (x > y) {
		max = x;
		min = y;
		if (max < z) {
			med = max;
			max = z;
		}
		else {
			if (z < min) {
				med = min;
				min = z;
			}
			else med = z;
		}
	}
	else {
		max = y;
		min = x;
		if (max < z) {
			med = max;
			max = z;	
		}
		else {
			if (z < min) {
				med = min;
				min = z;
			}
			else med = z;
		}
	}

	printf("%d %d %d", min, med, max);

	return 0;
}