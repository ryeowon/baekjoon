#include <stdio.h>

int main() {
	int n, i, x;
	scanf("%d", &n);
	char c, VPS;
	scanf("%c", &c);
	
	for (int i=0; i<n; i++) {
		x = 0;
		VPS = 1;
		scanf("%c", &c);
		while (c != '\n') {
			if (c == '(')
				x++;
			else if (c == ')')
				x--;
			if (x < 0)
				VPS = 0;
			scanf("%c", &c);	
		}
		
		if (!x && VPS)
			printf("YES\n");
		else
			printf("NO\n");
	}
	
	return 0;
}
