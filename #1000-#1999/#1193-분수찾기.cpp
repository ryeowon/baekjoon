#include <stdio.h>

int main() {
	int X, num1, num2, sum = 1;
	int count = 0;
	scanf("%d", &X);
	while(X > 0) {
		X -= sum++;
		count++;
	}
	
	if (count%2)
		printf("%d/%d", 1 - X, count + X);	
	else
		printf("%d/%d", count + X, 1 - X);
	
	return 0;
}
