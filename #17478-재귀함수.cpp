#include <cstdio>

void print(int n, int m) {
	for (int i=0; i<m; i++)
		printf("____");
	printf("\"����Լ��� ������?\"\n");
	if (n == m) {
		for (int i=0; i<n; i++)
			printf("____");
		printf("\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n");
		for (int i=0; i<n; i++)
			printf("____");
		printf("��� �亯�Ͽ���.\n");
	} else {
		for (int i=0; i<m; i++)
			printf("____");
		printf("\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n");
		for (int i=0; i<m; i++)
			printf("____");
		printf("���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n");
		for (int i=0; i<m; i++)
			printf("____");
		printf("���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n");
		print(n, m+1);
		for (int i=0; i<m; i++)
			printf("____");
		printf("��� �亯�Ͽ���.\n");
	}	
}

int main() {
	int n;
	scanf("%d", &n);
	printf("��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n");
	print(n, 0);
	return 0;
}
