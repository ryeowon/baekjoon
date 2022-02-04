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

        if (!distance && r1 == r2) // �� ���� ��ġ�ϴ� ��� 
            printf("-1\n");
        else if (distance == fabs(r1 - r2)) // ���ʿ��� ���ϴ� ��� 
        	printf("1\n");
        else if (distance < fabs(r1 - r2)) //�� ���� �ٸ� �� �ȿ� ���ϴ� ��� 
        	printf("0\n");
        else if (distance < r1 + r2) // ������ 2�� ����� ��� 
            printf("2\n");
        else if (distance == r1 + r2) // �ۿ��� ���ϴ� ��� 
        	printf("1\n");
        else
            printf("0\n");

        num--;
    }


    return 0;
}
