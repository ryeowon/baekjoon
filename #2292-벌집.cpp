#include <stdio.h>

int main() {
	int N, count = 1;
	int multiple = 6;
	scanf("%d", &N);
	N--;
	while (N > 0) {
		N -= multiple;
		multiple += 6;
		count++; 
	}
	printf("%d", count);
	return 0;
}
