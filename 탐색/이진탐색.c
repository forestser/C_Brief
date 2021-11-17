#include <stdio.h>
int n, count, sta, mid, end, res, key, testres;
int arr[64];

int topsearch(int sta, int end) {
	
	if(sta <= end) {
			count++;
			mid = (sta + end) / 2;
			if(key == arr[mid]) return count;
			else if(key < arr[mid]) return topsearch(sta, mid - 1);
			else if(key > arr[mid]) return topsearch(mid + 1, end);
	}
	return -1;
}

int botsearch(int sta, int end) {
	
	if(sta <= end) {
			count++;
			mid = (sta + end) / 2;
			if(key == arr[mid]) return count;
			else if(key > arr[mid]) return botsearch(sta, mid - 1);
			else if(key < arr[mid]) return botsearch(mid + 1, end);
	}
	return -1;
}

int test (int sta, int end) {
	if(arr[sta] < arr[end]) {
		for(int i = 0; i < end; i++) {
			if(arr[i] > arr[i + 1]) return -2;
		}
		return 12;
	}
	else {
		for(int i = 0; i < end; i++) {
			if(arr[i] < arr[i + 1]) return -2;
		}
		return 10;
	}
}

int main() {
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	scanf("%d", &key);
	testres = test(0, n-1);
	
	if(testres == -2) printf("불가능");
	else {
		if(testres == 12) res = topsearch(0, n -1);
		else res = botsearch(0, n - 1);
		
		if(res == -1) printf("실패");
		else printf("%d", res);
	}
	
	return 0;
}
