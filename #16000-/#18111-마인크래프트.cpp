#include <cstdio>

int main() {
	int N, M, B, area, h, time, bottom, top = 0;
	int height[257] = {0, };
	
	scanf("%d%d%d", &N, &M, &B);
	area = N*M;
	for (int i=0; i<area; i++) {
		scanf("%d", &h);
		top = top < h ? h : top;
		for (int i=0; i<=h; i++)
			height[i]++;
	}
	
	time = bottom = 0;
	
	while(height[bottom] == area)
		bottom++;
	
	while(height[top] != area) {
		if (area-height[bottom] <= B && area-height[bottom] <= height[top]*2 ) {
			B -= area-height[bottom];
			time += area-height[bottom];
			height[bottom] = area;
			bottom++;
		} else {
			B += height[top];
			time += height[top]*2;
			height[top] = 0;
			top--;
		}
	}
	
	printf("%d %d", time, top);
	
	return 0;
}
