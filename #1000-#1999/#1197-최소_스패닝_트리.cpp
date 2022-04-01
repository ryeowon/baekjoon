#include <cstdio>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <vector>

using namespace std;

template<typename WT>
class Graph{
public:
	int nV, nE;
	
	vector< pair< int, WT > > *edges;
	
	Graph() {}
	Graph(const char *_filename){
//		FILE *input = fopen( _filename , "r" );
		scanf("%d %d", &nV, &nE);
		
		edges = new vector< pair< int, WT > >[nV];
		for (int i=0; i<nE; i++){
			int v1, v2;
			double weight;
			scanf("%d %d %lf", &v1, &v2, &weight);
			v1--; v2--;
			edges[v1].push_back( make_pair( v2, (WT)weight));
			edges[v2].push_back( make_pair( v1, (WT)weight));
		}
//		fclose(input);
	}
};

class Disjoint_Set{
public:
	int n;
	int *parent;
	int *height;
	
	Disjoint_Set(){}
	Disjoint_Set(int _n){
		this->n = _n;
		parent = new int [n];
		height = new int [n];
		
		for(int i=0; i<n; i++){
			parent[i] = i;
			height[i] = 0;
		}
			
	}
	~Disjoint_Set() {
		delete [] parent;
		delete [] height;
	}
	
	int find(int x){
		int p = parent[x];
	
		if (p == x)
			return x;
		else {
			return parent[p] = find(p);
		}
	}
	
	bool union_(int x, int y){
		x = find(x);
		y = find(y);
	
		if (x == y)
			return false;
		
		if (height[x] == height[y]){
			parent[y] = x;
			height[x]++;
		}
		else if (height[x]> height[y])
			parent[y] = x;
		else
			parent[x] = y;
			
		return true;
	}
};

template<typename WT>
WT Kruskal(Graph<WT> &graph){
	
	vector< pair<WT, pair<int,int> > > d;
	for (int i=0; i< graph.nV; i++){
		
		int size = graph.edges[i].size();
		for(int j=0; j< size; j++){
			
			if ( i < graph.edges[i][j].first )
				d.push_back( make_pair( graph.edges[i][j].second, make_pair(i, graph.edges[i][j].first)));

		}
	}
	
	sort( d.begin(), d.end() );
	
	Disjoint_Set set(graph.nV);
	WT sum = (WT) 0;
	
	int d_size = d.size();
	
	for (int i=0; i<d_size; i++){
		int x = d[i].second.first;
		int y = d[i].second.second;
		WT w = d[i].first;
		
		if (set.find(x) != set.find(y)){
//			printf("%2d - %2d (W : %.2lf)\n", x+1, y+1, (double)w);
			sum += w;
			set.union_(x, y);
		}
	}
	return sum;
}

int main(){
	
	Graph<int> g("a");
	
	int c = Kruskal<int>(g);
	printf("%d", c);
	
	return 0;
}
