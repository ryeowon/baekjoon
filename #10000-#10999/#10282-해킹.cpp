#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void virus(){
	int comN, depN, first;
	
	scanf("%d %d %d", &comN, &depN, &first);
	
	vector< pair<int, int> > arr[comN+1];
	vector<int> distance(comN+1, 1e9);
	
	priority_queue<pair<int,int>, vector<pair<int, int>>, greater<pair<int, int>> > queue;
	queue.push({first,0});
	distance[first]=0;
	
	for (int i=0; i<depN; i++){
		int dependOn, dependcom, t;
		scanf("%d %d %d", &dependcom, &dependOn, &t);
		arr[dependOn].push_back({dependcom, t}); //dependOn -> dependcom
	}
	
	while(!queue.empty()){
		int dist = queue.top().second;
		int curNum = queue.top().first;
		
		queue.pop();
		int size = arr[curNum].size();
		for (int i=0; i<size; i++){
			int nextNum = arr[curNum][i].first;
			int nextDist = arr[curNum][i].second + dist;
			
			if (nextDist < distance[nextNum]){
				distance[nextNum] = nextDist;
				queue.push({nextNum, nextDist});
			}
		}
	}
	
	int count = 0;
	int time = 0;
	
	for (int i=1; i<=comN; i++){
		if (distance[i] != 1e9){
			count++;
			time = time < distance[i] ? distance[i] : time;
		}
	//	printf("distance[%d]: %d\n", i, distance[i]);
	}
	printf("%d %d\n", count, time);
}


int main(){
	int n;
	scanf("%d", &n);
	
	for (int i=0; i<n; i++){
		virus();
	}
	
	return 0;
}
