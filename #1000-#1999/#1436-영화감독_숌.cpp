#include <cstdio>

bool check_num(int n) {
	int count = 0;
	
	while(n) {
		if (n % 10 == 6) {
			if (count++ == 2)
				return true;	
		} else
			count = 0;
		n /= 10; 
	}
	
	return false;
}

int main() {
	int N, i, count = 0;
	scanf("%d", &N);
	
	for (i = 666; count != N; i++) {
		if (check_num(i))
			count++;
	}
	
	printf("%d", i-1);
	
	return 0;
}
