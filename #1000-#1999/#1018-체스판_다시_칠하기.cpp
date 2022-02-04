#include <stdio.h>

int main() {
	char board[50][50]={0, };
	int N, M, sum, min = 32;
	char color;
	scanf("%d %d", &N, &M);
	scanf("%c", &color);
	for (int i=0; i<N; i++) {
		for (int j=0; j<M; j++) {
			scanf("%c", &color);
			if ((i+j)%2) //odd
				board[i][j] = color == 'W' ? 1 : 0;
			else
				board[i][j] = color == 'W' ? 0 : 1;
		}
		scanf("%c", &color);
	}
	for (int i=0; i<=N-8; i++) {
		for (int j=0; j<=M-8; j++) {
			sum = 0;
			for (int x=i; x<i+8; x++) {
				for (int y=j; y<j+8; y++)
					sum += board[x][y];
			}
			sum = sum > 32 ? 64 - sum : sum;
			min = min > sum ? sum : min;
		}
	}
	printf("%d", min);
	return 0;
} 
