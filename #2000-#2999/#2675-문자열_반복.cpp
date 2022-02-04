#include <stdio.h>

/*baekjoon #2675 문자열 반복*/

int main() {
	
	char string[21] = {};
	int T, R, index = 0;
	
	scanf("%d", &T);
	
	for (int i=0; i<T; i++) {
		scanf("%d", &R);
		scanf("%s", string);
		
		while(string[index]) {
			for (int j=0; j<R; j++)
				printf("%c", string[index]);
			index++;
		}
		index = 0;
		printf("\n");
	}
	
	return 0;
}
