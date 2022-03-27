#include <iostream>
#include <algorithm>
class loc {
	public:
		int x;
		int y;
		
		loc(int x, int y) {
			this->x = x;
			this->y = y;
		}
		
		loc() {
			x = 0;
			y = 0;
		}
		
		bool operator < (loc &a) {
			return (this->y == a.y ? this->x < a.x : this->y < a.y);
		}
};

int main() {
	int N;
	scanf("%d", &N);
	
	loc *dots = new loc[N];
	
	for (int i=0; i<N; i++)
		scanf("%d %d", &dots[i].x, &dots[i].y);
	
	std::sort(dots, dots+N);
	
	for (int i=0; i<N; i++)
		printf("%d %d\n", dots[i].x, dots[i].y);
	
	delete dots;
	
	return 0;
}
