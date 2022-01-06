#include <stdio.h>

int main() {
	int N;
	char pattern[51];
	char filename[51];
	
	scanf("%d", &N); 
	scanf("%s", pattern);
	
	for (int i=1; i<N; i++) {
		scanf("%s", filename);
		for (int j=0; filename[j]; j++)
			pattern[j] = pattern[j] == filename[j] ? pattern[j] : '?';
	}
	
	printf("%s", pattern);
	
	return 0;
}
