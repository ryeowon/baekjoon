#include <iostream>
#include <algorithm>

class Location {
public:
	int x;
	int y;
	
	Location() {
		this->x = 0;
		this->y = 0;
	}
	
	Location(int x, int y) {
		this->x = x;
		this->y = y;
	}
	
	bool operator <(Location &loc) {
		if (loc.x != this->x)
			return this->x < loc.x;
		return this->y < loc.y;
	}
};

int main() {
	int n, x, y;
	scanf("%d", &n);
	
	Location *locations = new Location[n];
	
	for (int i=0; i<n; i++) {
		scanf("%d %d", &x, &y);
		locations[i] = Location(x, y);
	}
	
	std::sort(locations, locations+n);
	
	for (int i=0; i<n; i++) {
		printf("%d %d\n", locations[i].x, locations[i].y);
	}
	
	delete[] locations;
	
	return 0;
}
