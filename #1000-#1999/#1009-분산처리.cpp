#include <cstdio>

int main() {
	int n, a, b, ans;
	scanf("%d", &n);
	
	for (int i=0; i<n; i++) {
		ans = 1;
		scanf("%d %d", &a, &b);
		a %= 10;
		for (int j=0; j<b; j++)
			ans = a*ans % 10;
		printf("%d\n", ans ? ans : 10);
	}
		
	return 0;
}
