#include <stdio.h>

int count(int floor, int room) {
	int sum = 0;
	if (floor) {
		for (int i=1; i<=room; i++)
			sum += count(floor-1, i);	
		return sum;
	} else
		return room;
}

int main() {
	int T, k, n;
	scanf("%d", &T);
	for (int i=0; i<T; i++) {
		scanf("%d %d", &k, &n);
		printf("%d\n", count(k, n));
	}
	
	return 0;
}
