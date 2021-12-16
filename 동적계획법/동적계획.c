#include <stdio.h>
int main() {
	int n, k, list[100000] = {0, }, max = 0, count = 0;
	scanf("%d %d", &n, &k);
	for(int i = 1; i < n; i++) {
		scanf("%d", &list[i]);
	}
	for(int i = 0; i < k; i++) {
		count += list[i];
	}
	for(int j = k; j < n; j++) {
		count -= list[j - k];
		count += list[j];
		if(count > max) {
			max = count;
		}
	}
	printf("%d", max);
	return 0;
}
