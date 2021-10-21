#include <stdio.h>
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
