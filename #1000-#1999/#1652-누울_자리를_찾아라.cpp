#include <cstdio>

int main() {
	int n, count = 0;
	char area[101][101];
	char len = 0;
	scanf("%d", &n);
	scanf("%c", &len);
	for (int i=0; i<n; i++) {
		scanf("%s", area[i]);
	}
	
	for (int i=0; i<n; i++) {
		len = 0;
		for (int j=0; j<n; j++) {
			if (area[i][j] == 'X')
				len = 0;
			else if (len == 1) {
				count++;
				len++;
			} else
				len++;
		}
	}
	
	printf("%d ", count);
	count = 0;
	
	for (int i=0; i<n; i++) {
		len = 0;
		for (int j=0; j<n; j++) {
			if (area[j][i] == 'X')
				len = 0;
			else if (len == 1) {
				count++;
				len++;
			} else
				len++;
		}
	}
	
	printf("%d", count);
	
	return 0;
}
