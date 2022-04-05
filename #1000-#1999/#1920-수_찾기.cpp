#include <iostream>
#include <algorithm>

int main() {
	int N, M, num;
	scanf("%d", &N);
	int start, end, mid;
	char found;
	
	int* numbers = new int[N];
	
	for (int i=0; i<N; i++)
		scanf("%d", numbers + i);
	
	std::sort(numbers, numbers + N);
	scanf("%d", &M);
	
	for (int i=0; i<M; i++) {
		scanf("%d", &num);
		start = 0;
		end = N - 1;
		mid = N / 2;
		found = 0;
		
		while(end - start >= 0) {
			if (numbers[mid] < num) {
				start = mid + 1;
			} else if (numbers[mid] > num){
				end = mid - 1;
			} else {
				found = 1;
				break;
			}
			mid = (start + end) / 2;
		}
		
		printf("%d\n", found);
	}
	
	delete numbers;
	
	return 0;
}
