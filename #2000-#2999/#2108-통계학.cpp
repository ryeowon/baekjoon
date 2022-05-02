#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int N, num, mode, mode_count, c, mean, sum = 0;
	int count[8001] = {0, };
	scanf("%d", &N);
	
	int* numbers = new int[N];
	for (int i=0; i<N; i++) {
		scanf("%d", &num);
		sum += num;
		numbers[i] = num;
		count[num+4000]++;
	}
	
	sort(numbers, numbers+N);
	
	mode_count = 0;
	c = 0;
	
	for (int i=0; i<8001; i++) {
		if (mode_count < count[i]) {
			c = 1;
			mode_count = count[i];
			mode = i-4000;
		} else if (mode_count == count[i]) {
			c++;
		}
	}
	
	if (c > 1) {
		c = 0;
		for (int i=0; i<8001; i++) {
			if (mode_count == count[i])
				c++;
			if (c == 2) {
				mode = i-4000;
				break;
			}
		}
	}
	
	if (sum >= 0) {
		mean = float(sum)/N + 0.5;
	} else
		mean = float(sum)/N - 0.5;
	
	printf("%d\n%d\n%d\n%d", mean, numbers[N/2], mode, numbers[N-1]-numbers[0]);
	
	return 0;
}
