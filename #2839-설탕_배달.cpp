#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	for (int i=N/5; i>=0; i--) {
		if ((N-5*i)%3 == 0) {
			printf("%d", i+(N-5*i)/3);
			return 0;
		}
	}
	printf("-1");
	return 0;
}
