// 예제 2-2
#include <stdio.h>

int main(void) {
  char s[10] ;
  int i=0, p=-1 ;
  //i 를 0으로, p를 -1로 설정함
  scanf("%s", s);  
  while( s[i] != '\0' ){
      //s[i]번째가 Null이 아닐때까지 돌림
    if( s[i] == 'A'){
    //만약 s[i]번째의 문자가 A라면
      p = i;
      //i값을 p에 넣고
      break;
      //while문을 빠져나온다
    }
    i++ ;
    //만약 아닐시에는 i를 하나 올린다
  }
  if( p != -1 ) printf("%d번째\n", p+1);
    //만약 p가 -1이 아니라면(문자열에 A가 있다면)그것을 출력함
  else printf("not found\n");
  //아니라면 찾지 못했다는 것을 출력함


  return 0;
}