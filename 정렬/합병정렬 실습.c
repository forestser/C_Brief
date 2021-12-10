#include <stdio.h>
int last[100], level, pri;
int merge(int *list, int left, int mid, int right) {
	int i, j, k;
	i = left;
	j = mid + 1;
	k = left;
	while(i <= mid && j <= right) {
		if(list[i] > list[j]) {
			last[k++] = list[i++];
		}
		else {
			last[k++] = list[j++];
		}
	}
	if(i > mid) {
			for(int n = j; n <= right; n++) {
				last[k++] = list[j++];
			}
		}
		else {
			for(int m = i; m <= mid; m++) {
				last[k++] = list[i++];
			}
		}
		for(int q = left; q <=right; q++) {
			list[q] = last[q];
		}
}
int mergesort(int *list, int left, int right) {
	int mid;
	if(left < right) {
		mid = (left + right) / 2;
		mergesort(list, left, mid);
		mergesort(list, mid + 1, right);
		merge(list, left, mid, right);
		level++;
		printf("%d단계 :", level);
		for(int i = 0; i < pri; i++) {
			printf(" %d", list[i]);
		}
		printf("\n");
	}
}
int main() {
	int n, list[100];
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%d", &list[i]);
	}
	pri = n;
	mergesort(list, 0, n -1);
	return 0;
}
