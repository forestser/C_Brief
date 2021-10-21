#include <stdio.h>
int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	na(n, m);
	return 0;
}

int na(int n, int m) {
	int s = 0;
	for(int i = n; i < m; i++) {
		printf("%d + ", i);
		s += i;
	}
	s += m;
	printf("%d ", m);
	printf("= %d", s);
	return 1;
}
