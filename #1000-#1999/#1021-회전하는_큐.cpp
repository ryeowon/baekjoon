#include <cstdio>

int main() {
	char flag[50] = {0, };
	int size, cur_size, n, element, count, ans, idx = 0;
	scanf("%d %d", &size, &n);
	
	cur_size = size;
	ans = 0;
	
	for (int i=0; i<n; i++) {
		scanf("%d", &element);
		count = 0;
		
		if (cur_size == 1)
			break;

		while(idx != element-1) {
			idx = (idx+1)%size;
			if (!flag[idx])
				count++;
		}
		
		flag[idx] = 1;
		
		while(flag[idx])
			idx = (idx+1)%size;
		
		count = cur_size-count < count ? cur_size-count : count;
		cur_size--;
		ans += count;
	}
	
	printf("%d", ans);
	
	return 0;
}
