#include <iostream>
#include <queue>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int numCom, numLink, com1, com2, curNum, numVirus = 0;
    scanf("%d%d", &numCom, &numLink);
    
    queue<int> q;
    int links[101][101] = {0, };
    int checked[101] = {0, };
    
    for (int i=0; i<numLink; i++) {
        scanf("%d%d", &com1, &com2);
        links[com1][com2] = 1;
        links[com2][com1] = 1;
    }
    
    q.push(1); // 1번부터 시작
    
    while(!q.empty()) {
        curNum = q.front();
        q.pop();
        for (int i=1; i<=numCom; i++) {
            if (links[curNum][i] == 1 && !checked[i]) {
                checked[i] = 1;
                q.push(i);
                numVirus++;
            }
        }
    }
    
    printf("%d", numVirus-1);
    return 0;
}
