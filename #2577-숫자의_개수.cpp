#include <stdio.h>

int main() {
	int A, B, C, result;
	char count[10] = {0, };
	
	scanf("%d %d %d", &A, &B, &C);
	result = A * B * C;
	
	while(result) {
		count[result%10]++;
		result /= 10;
	}	
	
	for (int i = 0; i < 10; i++)
		printf("%d\n", count[i]);
	
	return 0;
}
