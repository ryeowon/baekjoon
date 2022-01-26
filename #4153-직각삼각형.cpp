#include <iostream>

void swap (int& a, int& b) {
	int temp = a;
	a = b;
	b = temp; 
	return;
}

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	do {
		if (a > b)
			swap(a, b);
		if (a > c)
			swap(a, c);
		if (b > c)
			swap(b, c);
		if (a*a + b*b == c*c)
			printf("right\n");
		else
			printf("wrong\n");
		scanf("%d %d %d", &a, &b, &c);
	} while (a || b || c);
	
	return 0;
}
