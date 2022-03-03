#include <cstdio>

int main() {
	int N, num, idx = -1;
	scanf("%d", &N);
	
	int *stack = new int[N];
	
	for (int i=0; i<N; i++) {
		scanf("%d", &num);
		if (num)
			stack[++idx] = num;
		else
			idx--;
	}
	
	num = 0;
	
	for (int i=0; i<=idx; i++)
		num += stack[i];
		
	printf("%d", num);
	
	delete stack;
	
	return 0;
}
