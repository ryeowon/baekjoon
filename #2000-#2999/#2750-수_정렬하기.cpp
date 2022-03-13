#include <iostream>
#include <algorithm>

int main() {
	int N;
	scanf("%d", &N);
	
	int *nums = new int[N];
	
	for (int i=0; i<N; i++)
		scanf("%d", nums+i);
	
	std::sort(nums, nums+N);
	
	for (int i=0; i<N; i++)
		printf("%d\n", nums[i]);
	
	return 0;
}
