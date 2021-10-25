int main(){
	int array[3] = { 10, 20, 30};
	int size = sizeof(array) / sizeof(array[0]); 
	//모든 배열의 값 / 배열 하나의 값 = 배열의 개수
	//Ex) 20(모든 배열의 값) / 4(배열 하나의 값) = 5(배열의 개수)
	outputArray( array, size);
}

void outputArray( int *p, int n){
	int i;
	for( i = 0 ; i < n ; i ++ ){
		printf("%d %d\n", p[i], *(p+i));
		// p[i]번째 배열의 값, (p + i)의 값(p의 초기주소에 i만큼 더한 주소의 값)을 출력
		// 결론적으로 둘의 값은 같음
		//뭐라해야하지? 그러니깐 p[i]번째나 *(p + i)번째의 주소는 같은 주소이니 그 값도 같다
	}
}