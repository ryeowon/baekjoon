#include <iostream>

class Human {
public:
	int weight;
	int height;
	int rank;
	
	Human() {
		weight = 0;
		height = 0;
		rank = 1;
	}
};

int main() {
	int N;
	scanf("%d", &N);
	
	Human* arr = new Human[N];
	
	for (int i=0; i<N; i++)
		scanf("%d %d", &arr[i].weight, &arr[i].height);
	
	for (int i=0; i<N; i++) {
		for (int j=0; j<N; j++) {
			if (arr[i].height < arr[j].height && arr[i].weight < arr[j].weight)
				arr[i].rank++;
		}
	}
	
	for (int i=0; i<N; i++)
		printf("%d ", arr[i].rank);
	
	return 0;
}
