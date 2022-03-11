#include <iostream>

int count_cable(long long length, int* cables, int N) {
	int count = 0;
	
	for (int i=0; i<N; i++)
		count += cables[i] / length;
	
	return count;
}

int main() {
	int K, N, max = 0;
	scanf("%d %d", &K, &N);
	
	int* cables = new int[K];
	
	for (int i=0; i<K; i++) {
		scanf("%d", &cables[i]);
		max = max > cables[i] ? max : cables[i];
	}
	
	long long start, end, mid, count, ans = 0;
	
	end = max;
	start = 1;
	mid = max / 2;
	
	while(end - start >= 0) {
		mid = (start + end) / 2;
		count = count_cable(mid, cables, K);
		
		if (count < N)
			end = mid - 1;
		else {
			start = mid + 1;
			ans = ans > mid ? ans : mid;
		}
	}
	
	printf("%lld", ans);
	
	delete cables;

	return 0;	
}
