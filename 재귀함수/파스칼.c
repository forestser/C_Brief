#include <stdio.h>

int memo[51][51]={0};

int recur(int a, int b){
	if(a==1||b==1){
		//1행과 1열은 1, 여기서 부터 출발
		//메모할 필요는 없으나 메모해둠
		return memo[a][b] = memo[b][a] = 1;
	}
    
	//메모한 값이 있다면 함수호출하지 않고 메모된 값 리턴
	if(memo[a][b]!=0){return memo[a][b];}
    
	//파스칼 삼격형은, (r, c) = (r-1, c) + (r, c-1) 함수호출하면서 메모
	else{
		return memo[a][b] = memo[b][a] = (recur(a-1, b) + recur(a, b-1))%100000000;
	}
}

int main(){
	
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", recur(a, b));
	
	return 0;
}