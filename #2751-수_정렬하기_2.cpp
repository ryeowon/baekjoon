#include <iostream>
#include <algorithm>

int main() {
	int N;
	scanf("%d", &N);
	int *numbers = new int[N];
	
	for (int i=0; i<N; i++)
		scanf("%d", numbers+i);
		
	std::sort(numbers, numbers + N);
	
	for (int i=0; i<N; i++)
		printf("%d\n", numbers[i]);
	 
	delete[] numbers;
	return 0;
}
