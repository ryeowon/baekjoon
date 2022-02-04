#include <stdio.h>

int main() {
	int number, sum, temp;
	scanf("%d", &number);
	
	for (int i=1; i<number; i++) {
		sum = temp = i;
		while (temp) {
			sum += temp % 10;
			temp /= 10;
		}
		
		if (sum == number) {
			printf("%d", i);
			return 0;
		}
	}
	
	printf("0");
	return 0;
}
