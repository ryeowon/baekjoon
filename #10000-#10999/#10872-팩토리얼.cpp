#include <cstdio>

int factorial(int num) {
	return num <= 1 ? 1 : num * factorial(num - 1);
}

int main() {
	int N;
	scanf("%d", &N);
	printf("%d", factorial(N));
	
	return 0;
}
