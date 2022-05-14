#include <cstdio>

int main() {
	int n;
	scanf("%d", &n);
	
	int count[n];
	
	count[1] = 0;
	for (int i=2; i<=n; i++) {
		count[i] = count[i-1]+1;
		if (!(i%3))
			count[i] = count[i] > count[i/3] ? count[i/3]+1 : count[i];
		if (!(i%2))
			count[i] = count[i] > count[i/2] ? count[i/2]+1 : count[i];
	}
	
	printf("%d", count[n]);
	return 0;
}
