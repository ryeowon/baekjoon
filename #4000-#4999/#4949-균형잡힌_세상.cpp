#include <cstdio>
#include <cstring>
int main() {
	char str[101];
	char stack[101];
	int top, i;
	char ans[4];
	
	scanf("%[^\n]s", str);
	while(strcmp(str, ".")) {
		top = -1;
		i = 0;
		strcpy(ans, "yes");
		while(str[i]) {
			if (str[i] == '(')
				stack[++top] = '(';
			else if (str[i] == '[')
				stack[++top] = '[';
			else if (str[i] == ')') {
				if (top >= 0 && stack[top] == '(')
					top--;
				else {
					strcpy(ans, "no");
					break;
				}
			} else if (str[i] == ']') {
				if (top >= 0 && stack[top] == '[')
					top--;
				else {
					strcpy(ans, "no");
					break;
				}
			}
			i++;
		}
		if (top >= 0)
			strcpy(ans, "no");
		printf("%s\n", ans);
		getchar();
		scanf("%[^\n]s", str);
	};
	return 0;
}
