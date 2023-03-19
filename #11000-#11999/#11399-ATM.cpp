#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int n, sum = 0;
    int t[1000];
    scanf("%d", &n);
    
    for (int i=0; i<n; i++)
        scanf("%d", t+i);
    
    sort(t, t+n);
    
    for (int i=0; i<n; i++)
        sum += t[i] * (n-i);
    
    printf("%d", sum);
    
    return 0;
}
