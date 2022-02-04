#include <stdio.h>

int main() {
	int N, flag, count = 0;
	char word[101], loc[26] = {0, };
	scanf("%d", &N);
	for (int i=0 ; i<N; i++) {
		scanf("%s", word);
		flag = 1;
		for (int j=0; word[j]; j++) {
			if (loc[word[j]-'a'] && loc[word[j]-'a'] != j) {
				flag = 0;
				break;
			}
			loc[word[j]-'a'] = j+1;
		}
		count += flag;
		for (int j=0; j<26; j++)
			loc[j] = 0;
	}
	printf("%d", count);
	return 0;
}
