#include <cstdio>

int main() {
	char prime[10001] = {0, };
	int a, b, min, sum = 0;
	scanf("%d %d", &a, &b);
	prime[1] = 1;
	
	for (int i=2; i<100; i++) {
		if (prime[i])
			continue;
		int k=2;
		while(i*k <= 10000) {
			prime[i*k++] = 1;
		}
	}
	
	min = -1;
	for (int i=a; i<=b; i++) {
		if (!prime[i]) {
			if (min == -1)
				min = i;
			sum += i;
		}
	}
	
	(min == -1) ? printf("-1") : printf("%d\n%d", sum, min);
	return 0;
}
