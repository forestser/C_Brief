#include <stdio.h>
//영단어가 이상하게 입력되는데, 그것을 바르게 고치는 코드
//ex ) 'bE au T I fu L' 이라 입력된다면 beautiful로 나옴
int main() {
	char a[105];
	gets(a);
	for(int i = 0; a[i] != '\0'; i++) {
		if(a[i] != 32) {
			if(a[i] > 64 && a[i] < 91) {
				printf("%c", a[i] + 32);
			}
			else if(a[i] > 96 && a[i] < 123) {
				printf("%c", a[i]);
			}
		}
	}
	return 0;
}
