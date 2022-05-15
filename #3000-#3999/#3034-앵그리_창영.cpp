#include <cstdio>
#include <cmath>
int main() {
	int n, w, h, l;
	scanf("%d%d%d", &n, &w, &h); 
	
	int max = sqrt(w*w+h*h);
	
	for (int i=0; i<n; i++) {
		scanf("%d", &l);
		printf("%s\n", l<=max ? "DA" : "NE");
	}
	
	return 0;
}
