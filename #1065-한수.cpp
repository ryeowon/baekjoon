#include <iostream>

bool check_num(int num) {
	if (num < 100)
		return true;
	
	int dx = num / 10 % 10 - num % 10;
	num /= 10;
	while (num >= 10) {
		if (dx != num / 10 % 10 - num % 10)
			return false;
		num /= 10;
	}
	
	return true;
}

int main() {
	int num, count = 0;
	scanf("%d", &num);
	
	for (int i=1; i<=num; i++)
		if (check_num(i))	count++;
	
	printf("%d", count);
	
	return 0;
}
