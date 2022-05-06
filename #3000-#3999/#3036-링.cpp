#include <cstdio>

int main() {
	int n, start, a, b;
	scanf("%d", &n);
	scanf("%d", &start);
	
	for (int i=1; i<n; i++) {
		scanf("%d", &b);
		a = start;
		for (int j=2; j<=b; j++) {
			while(b % j == 0 && a % j == 0) {
				b /= j;
				a /= j;
			}
		}
		
		printf("%d/%d\n", a, b);
	}
	
	
	return 0;
}
