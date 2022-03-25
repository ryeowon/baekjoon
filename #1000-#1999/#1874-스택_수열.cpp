#include <iostream>
#include <stack>

using namespace std;

int main() {
	int N, num, cur = 1;
	string ans;
	stack<int> stack;
	stack.push(1);
	ans += "+\n";
	scanf("%d", &N);
	
	for (int i=0; i<N; i++) {
		scanf("%d", &num);
		if (!stack.empty() && num == stack.top()) {
			ans += "-\n";
			stack.pop();
		} else if (num > cur) {
			while(num != cur) {
				ans += "+\n";
				stack.push(++cur);
			}
				stack.pop();
				ans += "-\n";
		} else if (num < cur) {
			
			if (stack.top() == num) {
				ans += "-\n";
				stack.pop();
			} else {
				ans = "NO";
				while(i<N-1) {
					scanf("%d", &num);
					i++;
				}
				break;
			}
		}
		
	}
	cout << ans;
	
	return 0;
}

