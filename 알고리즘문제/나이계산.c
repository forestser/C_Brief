#include <stdio.h>
//(올해는 2019년). 민증의 번호가 주어지면 나이, 성별을 판단하는 코드
int main() {
	int f, b, c;
	char s[5];
	scanf("%d-%d", &f, &b);
	int n = b / 1000000;
	if(n == 1) {
		c = 2020 - (f / 10000 + 1900);
		printf("%d M", c);
	}
	else if(n == 2) {
		c = 2020 - (f / 10000 + 1900);
		printf("%d W", c);
	}
	else if(n == 3) {
		c = 2020 - (f / 10000 + 2000);
		printf("%d M", c);
	}
	else {
		c = 2020 - (f / 10000 + 2000);
		printf("%d W", c);
	}
	return 0;
}
