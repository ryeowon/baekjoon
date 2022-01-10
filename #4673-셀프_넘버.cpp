#include <stdio.h>

int make_new_num(int n) {
	int sum = n;
	while(n) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main() {
	char flag[10001] = {0, };
	
	for (int i=1; i<10000; i++) {
		int new_num = make_new_num(i);
		if (new_num <= 10000)
			flag[new_num] = 1;
		if (!flag[i])	printf("%d\n", i);
	}
	
	return 0;
}
