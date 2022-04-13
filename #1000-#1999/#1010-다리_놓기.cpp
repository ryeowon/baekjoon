#include <cstdio>

int main() {
	int n, a, b, k;
	scanf("%d", &n);
	
	long long ans;
	
	for (int i=0; i<n; i++) {
		ans = 1;
		k = 1;
		scanf("%d %d", &a, &b);
		for (int j=b; j>b-a; j--) {
			ans *= j;
			ans /= k++;
		}
		printf("%lld\n", ans);
	}
			
	return 0;
}
