#include <stdio.h>

int memo[101][101];	
int arr[101][101];	
int n, m;

int myMax(int a, int b){
	if(a>b) return a;
	else return b;
}

int recur(int i, int j){
	if(i>=n||j>=m) return 0;
	
	else if(memo[i][j]!=0) return memo[i][j];
	
	else return memo[i][j] = myMax(recur(i+1, j) + arr[i][j], recur(i, j+1) + arr[i][j]);
}

int main(){
	
	scanf("%d%d", &n, &m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d", &arr[i][j]);
		}
	}
	s
	recur(0, 0);
	
	printf("%d", memo[0][0]);
	
	return 0;
}
