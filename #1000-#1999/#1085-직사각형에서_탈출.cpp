#include <stdio.h>
#include <stdlib.h>

int main() {
	int x, y, w, h, min;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	
	min = x > y ? y : x;
	min = min > w - x ? w - x : min;
	min = min > h - y ? h - y : min;
	
	printf("%d", min);
	
	return 0;
}
