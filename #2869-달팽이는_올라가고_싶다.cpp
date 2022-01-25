#include <stdio.h>
#include <math.h>
int main() {
	int A, B, V;
	scanf("%d %d %d", &A, &B, &V);
	A = ceil(double(V-A)/(A-B));
	printf("%d", A+1);
	return 0;
}
