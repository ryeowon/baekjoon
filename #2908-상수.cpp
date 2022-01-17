#include <stdio.h>
#include <stdlib.h>

void swap(char num[4]) {
	char temp;
	temp = num[0];
	num[0] = num[2];
	num[2] = temp;	
} 

int main() {
	char num1[4], num2[4];
	scanf("%s %s", num1, num2);
	swap(num1);
	swap(num2);
	printf("%s", atoi(num1) > atoi(num2) ? num1 : num2);
	return 0;
}
