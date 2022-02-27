#include <cstdio>

int main() {
	int N, num;
	scanf("%d", &N);
	
	int count[10001] = {0, };
	
	for (int i=0; i<N; i++) {
		scanf("%d", &num);
		count[num]++;
	}
	
	for (int i=1; i<10001; i++) {
		while(count[i]--)
			printf("%d\n", i);
	}
	
	return 0;
}
