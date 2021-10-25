#include<stdio.h>
int main()
{
    char *s = "world";
    int i;
    printf("%08X %08X %08X %s\n", &s, s, &s[0], s);
	// s의 주소값, 배열의 기본 주소값, 배열의 처음 값(기본 주소값과 같음), 배열 안 값
    for( i = 0 ; s[i] != '\0'; i ++)
			// s[i]가 '\0' 문자를 만나기 전까지 i의 값을 1씩 증가시킨다
        printf("%08X %c\n", &s[ i ], s[ i ] );
	// s[i]번째의 주소값, s[i]번째에 들어있는 값
    return 0;
}