#include <stdio.h>
//자연수 n이 입력되면 1 ~ n의 수 중 m의 배수합을 출력하는 코드
//예 ) 15 3 이 입력되면 1 ~ 15 중 3의 약수를 다 더함
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
