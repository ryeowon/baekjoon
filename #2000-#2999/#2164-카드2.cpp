#include <iostream>
#include <queue>

using namespace std;

int main() {
	queue<int> q;
	int N;
	scanf("%d", &N);
	
	for (int i=0; i<N; i++)
		q.push(i);
	
	while (q.size() != 1) {
		q.pop();
		q.push(q.front());
		q.pop();
	}
	
	printf("%d", q.front()+1);
	
	return 0;
}
