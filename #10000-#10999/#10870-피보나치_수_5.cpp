#include <cstdio>

int fibonacci(int n) {
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
	int N;
	scanf("%d", &N);
	printf("%d", fibonacci(N));
	return 0;
}
