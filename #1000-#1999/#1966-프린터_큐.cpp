#include <cstdio>

int main() {
	int N, docNum, doc, index, count;
	char priority[100]={0, };
	char max;
	scanf("%d", &N);
	for (int i=0; i<N; i++) {
		scanf("%d %d", &docNum, &doc);
		index = count = 0;
		for (int j=0; j<docNum; j++)
			scanf("%d", &priority[j]);
			
		while(priority[doc]) {
			if (priority[index]) {
				max = 0;
				for (int j=0; j<docNum; j++)
					max = max < priority[j] ? priority[j] : max;
				if (priority[index] == max) {
					count++;
					priority[index] = 0;
				}
			}
			index = (index+1)%docNum;
		}
		printf("%d\n", count);
	}
	
	return 0;
}
