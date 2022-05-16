#include <cstdio>

int main() {
	int chicken, coke, beer, count;
	scanf("%d%d%d", &chicken, &coke, &beer);
	
	count = coke/2 + beer;
	
	printf("%d", chicken > count ? count : chicken);
	return 0;
}
