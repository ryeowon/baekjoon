#include <iostream>
#include <algorithm>

int search(int* arr, int size, int num) {
	int left, right, mid;
	
	left = 0;
	right = size-1;
	mid = size/2;
	
	while(left <= right) {
		if (arr[mid] < num)
			left = mid + 1;
		else if (arr[mid] > num)
			right = mid - 1;
		else
			return 1;
			
		mid = (left+right)/2;
	}
	return 0;
}

int main() {
	int n, m, num;
	scanf("%d", &n);
	int cards[n];
	
	for (int i=0; i<n; i++)
		scanf("%d", cards+i);
		
	std::sort(cards, cards+n);
	
	scanf("%d", &m);
	
	for (int i=0; i<m; i++) {
		scanf("%d", &num);
		printf("%d ", search(cards, n, num));
	}
	
	return 0;
}
