#include <stdio.h>
#include <math.h>

int main() {

    int num;
    int x1, x2, y1, y2, r1, r2;
    float distance;

    scanf("%d", &num);

    while(num) {
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
        
        distance = sqrt(pow(x1-x2,2)+pow(y1-y2,2));

        if (!distance && r1 == r2) // 두 원이 일치하는 경우 
            printf("-1\n");
        else if (distance == fabs(r1 - r2)) // 안쪽에서 접하는 경우 
        	printf("1\n");
        else if (distance < fabs(r1 - r2)) //한 원이 다른 원 안에 속하는 경우 
        	printf("0\n");
        else if (distance < r1 + r2) // 접점이 2개 생기는 경우 
            printf("2\n");
        else if (distance == r1 + r2) // 밖에서 접하는 경우 
        	printf("1\n");
        else
            printf("0\n");

        num--;
    }


    return 0;
}
