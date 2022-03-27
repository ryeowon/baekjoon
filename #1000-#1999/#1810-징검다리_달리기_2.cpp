#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
#include <ctime>
#include <map>
#include <algorithm>

using namespace std;

struct location{
	int x,y;
	
	bool operator < (const location lo) const {
		if (lo.x != x)
			return lo.x < x;
		else
			return lo.y < y;
	}
};

int main(){
	int N, F;
	scanf("%d %d", &N, &F);
	N++;
	int a, b;
	
	location* loc = new location[N+1];
	map<location, int> check;
	
	location l, l2;

	double distance[50002];
	distance[1]=0;
	
	vector<int> goal;
	vector<int> jump[50002];
	loc[1].x = 0;
	loc[1].y = 0;
	
	if (F==0)
		goal.push_back(1);
		
	check[loc[1]] = 1;

	for (int i=2; i<=N; i++){
		scanf("%d %d", &a, &b);
		loc[i].x = a;
		loc[i].y = b;
		
		if (b==F)
			goal.push_back(i);
		distance[i] = 1e10;
		check[loc[i]] = i; //save number of bridge
	}
	
	//connect
	for (int i=1; i<=N; i++){
		for (int j=-2; j<=2; j++){
			for (int k=-2; k<=2; k++){
				
				if (!j && !k)
					continue;
				
				l.x = loc[i].x + j;
				l.y = loc[i].y + k;
				
				if (l.x<0 || l.y<0 || l.x>1000000 || l.y>1000000)
					continue;
					
				if (check[l])
					jump[i].push_back(check[l]);
			}
		}
	}

	priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > queue;
	
	queue.push({0,0});
	
	while(!queue.empty()){
		int curX = queue.top().first;
		int curY = queue.top().second;
		l.x = curX;
		l.y = curY;
		int curNum = check[l];
		
		queue.pop();

		int size = jump[curNum].size();

		for (int i=0; i<size; i++){
			int nextX = loc[jump[curNum][i]].x;
			int nextY = loc[jump[curNum][i]].y;
			
			l2.x = nextX;
			l2.y = nextY;
			
			double dx = curX - nextX;
			double dy = curY - nextY;
			
			double nextDist = distance[curNum] + sqrt(dx*dx+dy*dy);


			if (nextDist < distance[check[l2]]){
				distance[check[l2]] = nextDist;
				queue.push({nextX, nextY});
			}
		}
	}
	
	double d = -1;
	
	int size = goal.size();

	for (int i=0; i<size; i++){
		double temp = distance[goal[i]];
		if (temp < 1e10 && (d < 0 || d > temp))
			d = temp;
	}
	long result;
	if (d != -1)
		result = long(d+0.5);
	else
		result = -1;

	printf("%ld", result);

	delete [] loc;
	return 0;
}
