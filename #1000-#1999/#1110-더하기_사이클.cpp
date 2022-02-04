#include <stdio.h>

/*baekjoon #1110 더하기 사이클*/

int main() {
	int num1, num2, count = 0;
	scanf("%d", &num1);
	num2 = num1; 
	
	do {
		count++;
		num2 = num2 % 10 * 10 + ( num2 / 10 + num2 % 10) % 10;
	} while(num1 != num2);
	
	printf("%d", count);
	
	return 0;
}
