#include <cstdio>

int main() {
	int count[41];
	int n, num;
	count[0] = 1;
	count[1] = 0;
	
	for (int i=2; i<42; i++) {
		count[i] = count[i-1] + count[i-2];
	}
	
	scanf("%d", &n);
	
	for (int i=0; i<n; i++) {
		scanf("%d", &num);
		printf("%d %d\n", count[num], count[num+1]);
	}
	
	return 0;
}
