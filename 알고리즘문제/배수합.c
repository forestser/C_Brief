#include <stdio.h>
int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	printf("%d", x(n, m));
	return 0;
}

int x(int n, int m) {
	int r = 0;
	for(int i = 1; i <= n; i++) {
		if(i % m == 0) {
		r += i;
		}
	}
		return r;
}
