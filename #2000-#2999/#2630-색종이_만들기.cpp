#include <iostream>

using namespace std;

void find_square(int input[][128], int n, int width, int count[2]) {
    
    if (n < width) {
        return;
    }
    
    int sum[128][128] = {0, };
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++)
            sum[i/2][j/2] += input[i][j];
    }
    
    for (int i=0; i<n/width; i++) {
        for (int j=0; j<n/width; j++) {
            if (!sum[i][j]) {
                count[0] -= 3;
            } else if (sum[i][j] == width*width) {
                count[1] -= 3;
            }
        }
    }
    
    find_square(sum, n, width*2, count);
}

int main(int argc, const char * argv[]) {
    
    int n, temp;
    int input[128][128] = {0, };
    int sum[64][64] = {0, };
    int count[2] = {0, 0}; // count[0]: white, count[1]: blue
    scanf("%d", &n);
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            scanf("%d", &temp);
            temp ? count[1] += 1 : count[0] += 1;
            input[i][j] = temp;
            sum[i/2][j/2] += temp;
        }
    }
    
    find_square(input, n, 2, count);
    
    printf("%d\n%d", count[0], count[1]);
    
    return 0;
}

