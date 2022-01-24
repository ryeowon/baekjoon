#include <stdio.h>

int main() {
	int x, y, T, num, k, count;
	scanf("%d", &T);
	for (int i=0; i<T; i++) {
		scanf("%d %d", &x, &y);
		num = y - x;
		count = 0;
		k = 1;
		while (num >= k*2) {
			num -= (k++)*2;
			count += 2;
		}
		if (num <= k && num > 0)
			count++;
		else if (num > 0)
			count += 2;
			
		printf("%d\n", count);
	}	
	return 0;
}
