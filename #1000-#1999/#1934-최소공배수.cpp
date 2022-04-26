#include <cstdio>

int gcd(int a, int b) {
	return b ? gcd(b, a%b) : a;
}

int main() {
	int n, a, b;
	
	scanf("%d", &n);
	
	for (int i=0; i<n; i++) {
		scanf("%d %d", &a, &b);
		printf("%d\n", a * b / gcd(a, b));
	}
	
	return 0;
}
