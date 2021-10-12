#include <stdio.h>
#include <stdlib.h>

int main(){
	int *ptr ;

	ptr = malloc( sizeof(int) ) ;
	//ptr에 int의 크기를 넣음
	*ptr = 10 ;
	//*ptr에 10을 넣음
	printf("%8X, %d\n", ptr, *ptr );
	//ptr(주소)와 *ptr(ptr에 들어가있는 것)을 출력
	return 0;
}

