#include <cstdio>

int main() {
	int x, y, x2, y2;
	x = y = 0;
	
	for (int i=0; i<3; i++) {
		scanf("%d %d", &x2, &y2);
		x ^= x2;
		y ^= y2;
	}

	printf("%d %d", x, y);
	
	return 0;
}
