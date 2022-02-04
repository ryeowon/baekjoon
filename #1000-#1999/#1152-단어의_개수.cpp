#include <stdio.h>

int main() {
	char string[1000000];
	int i, count = 1;
	
	for (i=0; string[i-1] != '\n'; i++)  {
		scanf("%c", &string[i]);
		count += string[i] == ' ';
	}
	count -= string[0] == ' ';
	count -= string[i-2] == ' ';
	
	printf("%d", count);
	return 0;
}
