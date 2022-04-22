#include <cstdio>

int main() {
	int n, count[26] = {0, };
	char c, found=0;
	scanf("%d", &n);
	scanf("%d", &c);
	for (int i=0; i<n; i++) {
		scanf("%c", &c);
		count[c-'a']++;
		while(c != '\n')
			scanf("%c", &c);
	}
	
	for (int i=0; i<26; i++) {
		if (count[i] > 4) {
			found=1;
			printf("%c", i+'a');
		}
	}
	
	if(!found)
		printf("PREDAJA");
		
	return 0;
}
