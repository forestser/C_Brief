#include <stdio.h>

//0계단 경우의수 부터 차례대로 1, 1, 2
//메모이제이션 배열
int memo[100001]={1, 1, 2};

int recur(int a){
	if(a==1) return 1;
	
	//메모된 값이 있다면 함수 호출하지 말고 바로 리턴
	if(memo[a]!=0) return memo[a];
    
	else return memo[a] = (recur(a-1) + recur(a-2) + recur(a-3))%1000;
}

int main(){
	
	int a;
	scanf("%d", &a);
	printf("%d\n", recur(a));
	
	return 0;
}