#include <cstdio>

int main() {
	int N, F;
	scanf("%d %d", &N, &F);
	
	N -= N%100;
	
	while(N%F)
		N++;
	
	printf("%02d", N%100);
	
	return 0;
}
