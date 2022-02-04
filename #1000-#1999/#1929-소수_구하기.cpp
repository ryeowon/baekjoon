#include <stdio.h>

int main() {
	char prime[1000001] = {0, };
	prime[1] = 1;
	int m, n;
	scanf("%d %d", &m, &n);
	for (int i=2; i<=1000; i++) {
		if (prime[i])	continue;
		for (int j=2;i*j<=1000000;j++)
			prime[i*j] = 1;
	}
	
	for (int i=m; i<=n; i++) {
		if (!prime[i])
			printf("%d\n", i);
	}
	
	return 0;
}
