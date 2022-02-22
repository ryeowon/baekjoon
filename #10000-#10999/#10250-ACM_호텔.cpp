#include <stdio.h>

int main() {
	int T, H, W, N;
	scanf("%d", &T);
	for (int i=0; i<T; i++) {
		scanf("%d %d %d", &H, &W, &N);
		printf("%d%02d\n", N%H ? N%H : H,(N-1)/H+1);
	}
}
