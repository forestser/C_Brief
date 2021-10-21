#include <stdio.h>
//자연수 n, m(n < m) 이 입력된다면 n부터 m까지의 합을 출력함
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
