#include <stdio.h>
#include <string.h>
int main() {
	int N, num, index = 0; 
	int stack[10001] = {0, };
	char command[6];
	scanf("%d", &N);
	for (int i=0; i<N; i++) {
		scanf("%s", command);
		if (!strcmp(command, "push")) {
			scanf("%d", &num);
			stack[index++] = num;
		} else if (!strcmp(command, "pop")) {
			printf("%d\n", index ? stack[--index] : -1);
		} else if (!strcmp(command, "size")) {
			printf("%d\n", index);
		} else if (!strcmp(command, "empty")) {
			printf("%d\n", index ? 0 : 1);
		} else if (!strcmp(command, "top")){
			printf("%d\n", index ? stack[index-1] : -1);
		}
	}
	return 0;
}
