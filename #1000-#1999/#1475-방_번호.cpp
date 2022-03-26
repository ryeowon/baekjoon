#include <cstdio>

int main() {
	int count[9] = {0, };
	int max = 0;
	char c;
	scanf("%c", &c);
	
	while(c != '\n') {
		if (c == '6' || c == '9')
			count[6]++;
		else
			count[c - '0']++;
			
		scanf("%c", &c);
	}
	
	count[6]++;
	count[6] /= 2;
	
	for (int i=0; i<9; i++)
		max = max < count[i] ? count[i] : max;
	
	printf("%d", max);
	
	return 0;
}
