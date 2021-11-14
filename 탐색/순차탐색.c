#include <stdio.h>
int arr[64];
int k;
int search(int n) {
    int count = 0;
		scanf("%d", &k);
    for(int i = 0; i < n; i++) {
        count++;
        if(arr[i] == k) {
            return count;
        }
    }
    return -1;
}

int main() {
    int n, res = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    res = search(n);
	
    if(res == -1) {
        printf("실패");
    }
    else {
        printf("%d", res);
    }
	return 0;
}
