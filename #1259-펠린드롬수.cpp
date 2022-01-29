#include <iostream>
#include <string>

using namespace std;

int main() {
	string num;
	char flag;
	cin >> num;
	do {
		int len = num.length();
		flag = 1;
		for (int i=0; i<len/2; i++) {
			if (num[i] != num[len-1-i])
				flag = 0;
		}
		printf("%s", flag ? "yes\n" : "no\n");
		cin >> num;
	} while (num[0] != '0');
	
	return 0;
}
