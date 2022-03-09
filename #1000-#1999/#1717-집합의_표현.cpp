#include <cstdio>
#include <stdlib.h>

int find_parent(int x, int* arr){
	
	int p = arr[x];
	
	if (p == x)
		return x;
	else {
		return arr[p] = find_parent(p, arr);
	}
	
}

void union_ (int a, int b, int* parent){
	int parent_a = find_parent(a, parent);
	int parent_b = find_parent(b, parent);
	
//	if ( parent_a > parent_b )
		parent[parent_b] = parent_a;
}

int main(){
	int n, m;
	int op, num1, num2;
	int p1, p2;
	scanf("%d %d", &n, &m);
	
	int* parent = (int *)malloc((n+1)*sizeof(int));
	
	for (int i=0; i<=n; i++){
		parent[i] = i;
	}
	
	for (int i=0; i<m; i++){
		scanf("%d %d %d", &op, &num1, &num2);
		switch(op){
			case 0:
				union_(num1, num2, parent);
				break;
			case 1:
				p1 = find_parent(num1, parent);
				p2 = find_parent(num2, parent);
				
				if (p1 == p2)
					printf("YES\n");
				else
					printf("NO\n");
				break;
		}
	}
	return 0;
}
