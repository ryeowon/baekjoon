#include <stdio.h>
#include <stdlib.h> 

int main() {
	int N, N2, K, index = 0;
	scanf("%d %d", &N, &K);
	N2 = N;
	char *circle = (char *)calloc(N, sizeof(char));
	printf("<");
	while(N2) {
		for (int i=0; i<K-1;) {
			if (!circle[index]) {
				i++;
				index = (index+1) % N;
			}
			while (circle[index])
				index = (index+1) % N;
		}
		while (circle[index])
			index = (index+1) % N;
		circle[index] = 1;
		printf("%d", index+1);
		printf("%s", N2 == 1 ? ">" : ", ");
		N2--;
	}
	
	return 0;
}
