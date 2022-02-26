#include <iostream>
#include <deque>
#include <string.h>

int main() {
	
	std::deque<int> dq;
	int N, num;
	char cmd[11];
	
	scanf("%d", &N);
	
	for (int i=0; i<N; i++) {
		scanf("%s", cmd);
		if (!strcmp(cmd, "push_front")) {
			scanf("%d", &num);
			dq.push_front(num);
		} else if (!strcmp(cmd, "push_back")) {
			scanf("%d", &num);
			dq.push_back(num);
		} else if (!strcmp(cmd, "pop_front")) {
			printf("%d\n", dq.size() ? dq.front() : -1);
			if (dq.size())
				dq.pop_front();
		} else if (!strcmp(cmd, "pop_back")) {
			printf("%d\n", dq.size() ? dq.back() : -1);
			if (dq.size())
				dq.pop_back();
		} else if (!strcmp(cmd, "size")) {
			printf("%d\n", dq.size());
		} else if (!strcmp(cmd, "empty")) {
			printf("%d\n", dq.empty());
		} else if (!strcmp(cmd, "front")) {
			printf("%d\n", dq.size() ? dq.front() : -1);
		} else
			printf("%d\n", dq.size() ? dq.back() : -1);
	}
	
	return 0;
}
