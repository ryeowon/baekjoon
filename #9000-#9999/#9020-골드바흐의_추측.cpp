#include <cstdio>

int main() {
	int n, num;
	char prime[10001] = {0, };
	prime[1] = 1;
	
	for (int i=2; i<=100; i++) {
		if (prime[i])
			continue;
		for (int k=2; i*k<=10000; k++)
			prime[i*k] = 1;
	}
	
	scanf("%d", &n);
	for (int i=0; i<n; i++) {
		scanf("%d", &num);
		int p = num / 2;
		while(1) {
			if (!prime[p] && !prime[num-p]) {
				printf("%d %d\n", p, num-p);
				break;
			}
			p--;
		}
	}
	
	return 0;	
}
