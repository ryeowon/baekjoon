#include <cstdio>

int main() {
	int c;
	int count[26] = {0, };
	
	scanf("%c", &c);
	while(c != '\n') {
		count[c-'a']++;
		scanf("%c", &c);
	}
	
	for (int i=0; i<26; i++) 
		printf("%d ", count[i]);
	return 0;
}
