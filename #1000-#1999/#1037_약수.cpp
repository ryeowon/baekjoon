#include <cstdio>

int main() {
	int n, x, min, max;
	scanf("%d", &n);
	
	scanf("%d", &min);
	max = min;
	
	for (int i=1; i<n; i++) {
		scanf("%d", &x);
		min = min > x ? x : min;
		max = max < x ? x : max;
	}
	
	printf("%d", min*max);
	
	return 0;
}
