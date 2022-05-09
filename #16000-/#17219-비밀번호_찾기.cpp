#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, m;
	string search, site;
	cin >> n >> m;
	
	map<string, string> pwds;
	
	for (int i=0; i<n; i++) {
		cin >> site;
		cin >> pwds[site];
	}
	
	for (int i=0; i<m; i++) {
		cin >> search;
		cout << pwds[search] << "\n";
	}
	
	return 0;
}
