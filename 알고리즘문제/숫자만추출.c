#include <stdio.h>
//문자와 숫자가 섞여나오는 코드에서 숫자만을 추출하여 int형으로 바꾸고, 그것의 약수의 개수를 추출하는 코드
//ex) 'g0en2Ts8eSoft' 가 있다면 여기서 028을 추출해서 28, 이것의 약수의 개수인 6개가 추출됨
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
