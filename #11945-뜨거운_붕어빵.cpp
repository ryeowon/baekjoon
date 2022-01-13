#include <iostream>

int main() {
	int row, col;
	scanf("%d %d", &row, &col);
	char* bungEo = (char *)malloc(col*sizeof(char));
	
	for (int i=0; i<row; i++) {
		scanf("%s", bungEo);
		for (int j=col-1; j>=0; j--)
			printf("%c", bungEo[j]);
		printf("\n");
	}
		
	return 0;
}
