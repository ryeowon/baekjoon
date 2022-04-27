#include <cstdio>

int main() {
	int n, x;
	char S[20] = {0, };
	char cmd[7];
	scanf("%d", &n);
	
	for (int i=0; i<n; i++) {
		scanf("%s", cmd);
		switch(cmd[0]) {
			case 'a':
				if (cmd[1] == 'd') {
					scanf("%d", &x);
					S[x-1] = 1;
					break;
				}
				for (int i=0; i<20; i++)
					S[i] = 1;
				break;
			case 'c':
				scanf("%d", &x);
				printf("%d\n", S[x-1]);
				break;
			case 'e':
				for (int i=0; i<20; i++)
					S[i] = 0;
				break;
			case 'r':
				scanf("%d", &x);
				S[x-1] = 0;
				break;
			default:
				scanf("%d", &x);
				S[x-1] = !S[x-1];
		}
	}
	return 0;
}
