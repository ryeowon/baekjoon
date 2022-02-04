#include <stdio.h>

int main() {
	int N;
	float score[1001];
	float max, sum;
	max = sum = 0;
	
	scanf("%d", &N);
	 
	for (int i = 0; i < N; i++) {
		scanf("%d", &score[i]);
		max = score[i] > max ? score[i] : max;
	}
	
	for (int i = 0; i < N; i++)
		sum += score[i] / max * 100;
		
	printf("%f", sum / N);
	
	return 0;
}
