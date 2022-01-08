#include <stdio.h>
/* baekjoon #4344 */
int main() {
	int num, students, sum;
	int scores[1000];
	float avg, count = 0;
	
	scanf("%d", &num);
	
	for (int i=0; i<num; i++) {
		scanf("%d", &students);
		sum = count = 0;
		
		for (int j=0; j<students; j++) {
			scanf("%d", &scores[j]);
			sum += scores[j];
		}
		
		avg = (float)sum / students;
		
		for (int j=0; j<students; j++)
			count = scores[j] > avg ? count + 1 : count;
			
		printf("%.3f%%\n", count/students*100);
		
	}
	
	return 0;
}
