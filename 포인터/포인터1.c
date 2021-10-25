#include <stdio.h>
size_t myStrlen( const char *str );
int main(void) {
  char s[] = "hello world";
  printf("%d\n", myStrlen(s));
  return 0;
}
size_t myStrlen( const char *str ){
  char *s;
  for( s = str ; *s; s++ ) ;
	//s = 배열의 처음 부분, *s가 '\0'문자를 만날 때까지 s의 값을 하나씩 상승
  return s-str;
	// 배열의 끝 값(\0)문자를 제외한 값 - 배열의 기본 값 = 배열의 개수
}  