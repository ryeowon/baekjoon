#include <cstdio>

int main() {
	int N;
	long long sum = 0;
	long long R = 1;
	char c;
	scanf("%d", &N);
	scanf("%c", &c);
	
	for (int i=0; i<N; i++) {
		scanf("%c", &c);
		sum += ((c-'a'+1)*R) % 1234567891;
		R = (R*31) % 1234567891;
	}
	
	printf("%lld", sum%1234567891);
	
	return 0;
}
