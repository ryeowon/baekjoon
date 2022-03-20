#include <cstdio>

int main() {
	int h, m, t;
	scanf("%d %d", &h, &m);
	scanf("%d", &t);
	
	m = m + t % 60;
	if (m >= 60) {
		h++;
		m %= 60;
	}
	
	printf("%d %d", (h+t/60)%24, m);
	
	return 0;
}
