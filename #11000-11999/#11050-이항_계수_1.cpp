#include <stdio.h>

int main() {
	int N, K, result = 1;
	scanf("%d %d", &N, &K);
	
	int i = K;
	
	while (i) {
		result *= (N--);
		i--;
	}
	
	while (K)
		result /= K--;
	
	printf("%d", result);
	
	return 0;
}
