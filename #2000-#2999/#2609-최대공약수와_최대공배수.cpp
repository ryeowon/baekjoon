#include <stdio.h>

int find_gcd(int a, int b) {
	int c;
	while (b) {
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int main() {
	int num1, num2, gcd;
	
	scanf("%d %d", &num1, &num2);
	
	gcd = find_gcd(num1, num2);
	
	printf("%d\n%d", gcd, num1*num2/gcd);
	
	return 0;
}
