#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int a, int b) {
	return a > b;
}
	 
int main() {
	int N, M;
	int h, amount, idx = 0;
	scanf("%d %d", &N, &M);
	
	int *woods = new int[N];
	
	for (int i=0; i<N; i++)
		scanf("%d", woods + i);
	
	sort(woods, woods + N, compare);
	
	h = woods[0];
	
	while(M) {
		if (idx >= N-1) {
			h -= M / (idx+1);
			if (M % (idx+1))
				h--;
			break;
		}
		amount = (woods[0] - woods[idx+1])*(idx+1);

		if (amount <= M) {
			M -= amount;
			h = woods[idx+1];
			woods[0] = h;
			idx++;
		} else {
			h -= M / (idx+1);
			if (M % (idx+1))
				h--;
			break;
		}
	}
	
	printf("%d", h);
	
	return 0;
}
