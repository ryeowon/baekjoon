#include <iostream>
#include <algorithm>

class Member {
public:
	int age;
	char name[101];
	int order;
	
	Member() {
		age = 0;
		name[0] = '\0';
		order = 0;
	}
	
	bool operator < (Member &a) {
		return a.age != this->age ? this->age < a.age : this->order < a.order;
	}
};

int main() {
	int num;
	scanf("%d", &num);
	Member *mem = new Member[num];
	
	for (int i=0; i<num; i++) {
		scanf("%d %s", &mem[i].age, mem[i].name);
		mem[i].order = i;
	}
	
	std::sort (mem, mem + num);
	
	for (int i=0; i<num; i++)
		printf("%d %s\n", mem[i].age, mem[i].name);
	
	return 0;
}
