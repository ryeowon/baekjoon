#include <stdio.h>

int main() {
	int N, num, count = 0;
	char prime[1001] = {0, };
	scanf("%d", &N);
	prime[1] = 1;
	
	for (int i=2; i<=100; i++) {
		if (prime[i])	continue;
		for (int j=2; j*i <= 1000; j++)
			prime[j*i] = 1;
	}
	
	for (int i=0; i<N; i++) {
		scanf("%d", &num);
		if (!prime[num])
			count++;
	}
	printf("%d", count);
	return 0;
}
