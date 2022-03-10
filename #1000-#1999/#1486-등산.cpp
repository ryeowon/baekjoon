#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

void go(int d[][25], int h[][25], int maxX, int maxY, int T){
	
	priority_queue<pair<pair<int,int>, int>> queue;
	
	int dx[4] = {1,-1, 0, 0};
	int dy[4] = {0, 0, 1, -1};
	
	queue.push({{0,0},h[0][0]});
	
	d[0][0] = 0;
	
	while(!queue.empty()){
		int curcost = -queue.top().second;
		int curX = queue.top().first.first;
		int curY = queue.top().first.second;
		int curH = h[curX][curY];
		
		queue.pop();
		
		for (int i=0; i<4; i++){
			int nextX = curX + dx[i];
			int nextY = curY + dy[i];
			int nextCost;
			if (nextX < 0 || nextY < 0 || nextX >= maxX || nextY >= maxY)
				continue;
				
			int nextH = h[nextX][nextY];
			if (abs(nextH-curH)<=T){
				if (curH >= nextH)	nextCost = 1;
				else	nextCost = pow(nextH-curH, 2);
				
				if (nextCost + d[curX][curY] < d[nextX][nextY]){
					d[nextX][nextY] = nextCost + d[curX][curY];
					queue.push({{nextX,nextY},-d[nextX][nextY]});
				}
			}
		}
	}
}

void back(int d[][25], int h[][25], int maxX, int maxY, int T){
	
	priority_queue<pair<pair<int,int>, int>> queue;
	
	int dx[4] = {1,-1, 0, 0};
	int dy[4] = {0, 0, 1, -1};
	
	queue.push({{0,0},h[0][0]});
	
	d[0][0] = 0;
	
	while(!queue.empty()){
		int curcost = -queue.top().second;
		int curX = queue.top().first.first;
		int curY = queue.top().first.second;
		int curH = h[curX][curY];
		
		queue.pop();
		
		for (int i=0; i<4; i++){
			int nextX = curX + dx[i];
			int nextY = curY + dy[i];
			int nextCost;
			if (nextX < 0 || nextY < 0 || nextX >= maxX || nextY >= maxY)
				continue;
			
			int nextH = h[nextX][nextY];
			if (abs(nextH-curH)<=T){
				if (curH <= nextH)	nextCost = 1;
				else	nextCost = pow(nextH-curH, 2);
				
				if (nextCost + d[curX][curY] < d[nextX][nextY]){
					d[nextX][nextY] = nextCost + d[curX][curY];
					queue.push({{nextX,nextY},-d[nextX][nextY]});
				}
			}	
		}
	}
}

int main(int argc, char **argv){
	int matrix[25][25];
	int distUp[25][25];
	int distDown[25][25];
	
	int col, row, T, S;
	scanf("%d %d", &row, &col);
	scanf("%d %d", &T, &S);
	
	char a;
	
	for (int i=0; i<row; i++){
		for (int j=0; j<col; j++){
			scanf(" %c", &a);
			if (a>='a')
				matrix[i][j] = a - 'a' + 26;
			else	matrix[i][j] = a - 'A';
			
			distUp[i][j] = 1e9;
			distDown[i][j] = 1e9;
		}
	}
	
	go(distUp, matrix, row, col, T);
	back(distDown, matrix, row, col, T);
	
	int ans = 0;
	
	for (int i=0; i<row; i++){
		for (int j=0; j<col; j++){
			if (distUp[i][j] == 1e9 || distDown[i][j] == 1e9)
				continue;
			if (distUp[i][j] + distDown[i][j] <= S){
				if (ans < matrix[i][j])
					ans = matrix[i][j];
			}
		}
	}
	
	printf("%d", ans);
	
	return 0;
}
