#include <iostream>
#include <algorithm>

int lower_bound(int *nums, int target, int N) {
	int mid, start, end;
	start = 0;
	end = N - 1;
	
	while (end > start) {
		mid = (start + end) / 2;
		if (nums[mid] >= target)
			end = mid;
		else
			start = mid + 1;
	}
	
	return end;
}

int upper_bound(int *nums, int target, int N) {
	int mid, start, end;
	start = 0;
	end = N - 1;
	
	while (end > start) {
		mid = (start + end) / 2;
		if (nums[mid] <= target)
			start = mid + 1;
		else
			end = mid;

	}
	
	return end;
}

int main() {
	int N, M, upper;
	scanf("%d", &N);
	int target;
	int *nums = new int[N];
	
	for (int i=0; i<N; i++)
		scanf("%d", nums + i);
		
	std::sort(nums, nums + N);
	
	scanf("%d", &M);
	
	for (int i=0; i<M; i++) {
		scanf("%d", &target);
		
		upper = upper_bound(nums, target, N);
		
		if (upper == N - 1 && nums[upper] == target)
			upper++;
		
		printf("%d ", upper - lower_bound(nums, target, N));
	}
	
	delete nums;
	
	return 0;
}
