#include <stdio.h>

int main() {
	int time[1001] = {0, };
	int N, time1, time2, bucket;
	int max = 0;
	scanf("%d", &N);
	for (int i=0; i<N; i++) {
		scanf("%d %d %d", &time1, &time2, &bucket);
		for (int j=time1; j<=time2; j++)
			time[j] += bucket;
	}
	
	for (int i=0; i<1002; i++)
		max = max < time[i] ? time[i] : max;
		
	printf("%d", max);
	
	return 0;
}
