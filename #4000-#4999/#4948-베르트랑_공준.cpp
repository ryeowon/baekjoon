#include <cstdio>

int main() {
	char prime[248000] = {1, 1};
	int k, count, n;
	
	scanf("%d", &n);
	
	for (int i=2; i<500; i++) {
		if (prime[i])
			continue;
		k = 2;
		while (i*k <= 246912) {
			prime[i*k++] = 1;
		}
	}
	
	while(n) {
		count = 0;
		for (int i=n+1; i<=2*n; i++) {
			if (!prime[i])
				count++;
		}
		printf("%d\n", count);
		scanf("%d", &n);
	}	
	
	return 0;
}
