#include <stdio.h>
int myStrlen( char str[] );
int myStrlen2( char str[] );

int main() {
	char s[100];
	scanf("%s", s );
	
	printf("%d\n", myStrlen(s) ); // 문자 길이 
	printf("%d\n", myStrlen2(s)); // 문자 중 digit(숫자)의 개수
	
	return 0;
}
int myStrlen( char str[] ){
	int i, size = 0;
	for(i = 0; str[i] != '\0'; i++) {
		size++;
        //문자열을 읽으면서 NULL이 아닐때까지 size를 하나씩 올림
	}
	return size;
}
int myStrlen2( char str[] ){
	int i, res = 0;
	for(i = 0; str[i] != '\0'; i++) {
		if(str[i] >= '0' && str[i] <= '9') res++;
        //만약 문자열 중 숫자가 있다면(아스키코드로 함) res를 늘림
	}
	return res;
}