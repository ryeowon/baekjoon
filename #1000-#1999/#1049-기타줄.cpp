#include <cstdio>

int main() {
	int N, M, min1, min6;
	int price1, price6, sum;
	scanf("%d %d", &N, &M);
	
	min1 = min6 = 1000;
	
	for (int i=0; i<M; i++) {
		scanf("%d %d", &price6, &price1);
		min1 = min1 > price1 ? price1 : min1;
		min6 = min6 > price6 ? price6 : min6; 
	}
	
	min6 = min6 > min1*6 ? min1*6 : min6;
	
	sum = min6 > min1*(N%6) ? min1*(N%6) : min6;
	sum += N/6*min6;
	
	printf("%d", sum);
	
	return 0;
}
