#include <stdio.h>
/* baekjoon #8958 */
int main() {
	
	int num, sum, count;
	char c;
	
	scanf("%d", &num);
	scanf("%c", &c);
	
	for (int i=0; i<num; i++) {
		sum = count = 0;
		do {
			scanf("%c", &c);
			if (c == 'O') {
				count++;
				sum += count;
			} else {
				count = 0;
			}
		} while(c != '\n');
		printf("%d\n", sum);
	}
	
	return 0;
}
