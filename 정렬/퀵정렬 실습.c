#include <stdio.h>
#define swap(x, y, t) ((t) = (x), (x) = (y), (y) = (t))
int level,n;

int part(int *list, int left, int right) {
	int pivot, low, high, temp;
	low = left+1;
	high = right;
	pivot = list[left];
	while(low <= high && low <= right) {
		while(list[low] > pivot) {
			low++;
		}
		while(list[high] < pivot) {
			high--;
		}
		if(low<high) {
			swap(list[low], list[high], temp);
		}
	}
	swap(list[left], list[high], temp);
	return high;
}

int sort(int *list, int left, int right) {
	if(left < right) {
		int br = part(list, left, right);
		level++;
		printf("%d단계 : ", level);
	for(int i = 0; i < n; i++) {
		printf("%d ", list[i]);
	}
	printf("\n");
		sort(list, left, br - 1);
		sort(list, br + 1, right);
	}
}

int main() {
	int list[100];
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%d", &list[i]);
	}
	sort(list, 0, n - 1);
	return 0;
}
