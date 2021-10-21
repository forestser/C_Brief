#include <stdio.h>
//n명의 나이가 입력되는데, 이 n명의 사람 중 가장 나이 차이가 많이 나는 경우를 구하는 코드
int main() {
	int n, max = 1, min = 101;
	int b[101];
	scanf("%d", &n);
		for(int i = 0; i < n; i++) {
			scanf("%d", &b[i]);
		}
	
	for(int j = 0; j < n; j++) {
		if(b[j] > max) {
			max = b[j];
		}
		if(b[j] < min) {
			min = b[j];
		}
	}
	int res = max - min;
	printf("%d", res);
	return 0;
}
