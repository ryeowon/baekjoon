#include <stdio.h> 
#include <stdlib.h>
int main() {
	int N, num, head, tail;
	char cmd[6];
	
	scanf("%d", &N);
	int *queue = (int *)malloc(N*sizeof(int));

	head = tail = 0;

	for (int i=0; i<N; i++) {
		scanf("%s", cmd);
		if (cmd[1] == 'u') //push
			scanf("%d", &queue[tail++]);
		else if (cmd[0] == 'p') //pop
			printf("%d\n", tail == head ? -1 : queue[head++]);
		else if (cmd[0] == 's') //size
			printf("%d\n", tail - head);
		else if (cmd[0] == 'e') //empty
			printf("%d\n", tail == head ? 1 : 0);
		else if (cmd[0] == 'f') //front
			printf("%d\n", tail == head ? -1 : queue[head]);
		else  //back
			printf("%d\n", tail == head ? -1 : queue[tail-1]);
	}
	
	return 0;
}
