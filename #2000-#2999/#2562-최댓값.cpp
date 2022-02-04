#include <stdio.h>

int main()
{

	int i, num, max, index = 1;

	scanf("%d", &max);

	for (i = 2; i < 10; i++)
	{
		scanf("%d", &num);
		max = num > max ? num : max;
		index = num == max ? i : index;
	}

	printf("%d\n%d", max, index);
	return 0;
}
