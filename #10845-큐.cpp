#include <stdio.h>
#include <string.h>

int main() {
	int N, queue[10001], num;
	int head, tail;
	head = tail = 0;
	char cmd[6];
	scanf("%d", &N);
	for (int i=0; i<N; i++) {
		scanf("%s", cmd);
		if (!strcmp(cmd, "push"))
			scanf("%d", &queue[tail++]);
		else if (!strcmp(cmd, "pop"))
			printf("%d\n", tail == head ? -1 : queue[head++]);
		else if (!strcmp(cmd, "size"))
			printf("%d\n", tail - head);
		else if (!strcmp(cmd, "empty"))
			printf("%d\n", tail == head ? 1 : 0);
		else if (!strcmp(cmd, "front"))
			printf("%d\n", tail == head ? -1 : queue[head]);
		else 
			printf("%d\n", tail == head ? -1 : queue[tail-1]);
	}
}
