#include <stdio.h>

int main() {
	char word[16];
	char sec[26] = {3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};
	int count = 0;
	scanf("%s", word);
	for (int i=0; word[i]; i++) {
		count += sec[word[i]-'A'];
	}
	printf("%d", count);
	return 0;
}
