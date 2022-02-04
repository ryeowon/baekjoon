#include <stdio.h>

int main() {
	char word[101];
	scanf("%s", word);
	int count = 0;
	for (int i=0; word[i]; i++) {
		if (word[i] == '-')
			continue;
		else if (word[i] == '=' && i > 1 
				&& word[i-2] == 'd' && word[i-1] == 'z') {
					count--;
					continue;
		} else if (word[i] == '=')
			continue;
		else if (word[i] == 'j' && i > 0 && word[i-1] == 'l' | word[i-1] == 'n')
			continue;
		else	count++;
	}
	printf("%d", count);
	return 0;
}
