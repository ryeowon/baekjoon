#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int a, int b) {
	return a > b;
}

int main() {
	int n, sum = 0;
	scanf("%d", &n);
	
	int *A = new int[n];
	int *B = new int[n];
	
	for (int i=0; i<n; i++)
		scanf("%d", A + i);
	
	for (int i=0; i<n; i++)
		scanf("%d", B + i);
	
	sort(A, A + n);
	sort(B, B + n, compare);
	
	for (int i=0; i<n; i++)
		sum += A[i] * B[i];
	
	printf("%d", sum);
	
	return 0;
}
