#include <stdio.h>
int main() {
	char a[50];
	int s, h = 0, sum = 0;
	scanf("%s", a);
	for(int i = 0; a[i] != '\0'; i++) {
		if(a[i] > 47 && a[i] < 58) {
		s = a[i] - '0';
			sum = sum * 10 + s;
		}
	}
	for(int j = 1; j <= sum; j++) {
		if(sum % j == 0) {
			h++;
		}
	}
	printf("%d\n", sum);
	printf("%d", h);
	return 0;
}
