#include <iostream>
#include <algorithm>

bool compare(char a, char b) {
	return b < a;
}

int main() {
	char num[12];
	int n;
	scanf("%s", num);
	
	for (n=0; num[n]; n++);
	
	std::sort(num, num+n, compare);
	
	printf("%s", num);
	
	return 0;
}
