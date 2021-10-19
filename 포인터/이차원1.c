#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void genRandom( int a[][5], int r );
void outputArray( int a[][5], int r);
float averageScore( int *row, int size );
int main() {
	
	int score[4][5], i ;
	genRandom( score, 4 );
	outputArray( score, 4 );
	
	for( i = 0 ; i < 4 ; i ++ ){
		printf("선수 %d : %.2f\n", i+1, averageScore( score[i], 5) );
	}
	
	return 0;
} 
void genRandom( int a[][5], int r ){
	int i, j;
	srand(time(NULL));
    //srand를 써서 돌릴 때마다 다른 수가 랜덤으로 나오게 함(매번 랜덤 함수를 돌리게 함)
	for( i = 0 ; i < r ; i ++ )
		for( j = 0 ; j < 5 ; j ++ )
			a[i][j] = rand() % 10 + 1;// 이 부분에 rand 함수를 이용해 1~10 정수 생성
}
void outputArray( int a[][5], int r){
	int i, j;
	for( i = 0 ; i < r ; i ++ ){
		for( j = 0 ; j < 5 ; j ++ )
			printf("%5d", a[i][j] );
            //랜덤으로 받은 점수를 출력해줌(한줄에 5개)
		printf("\n");
	}
}
float averageScore( int *row, int size ){
	// 선수 한명의 점수를 입력 받아 절사 평균을 구하여 출력
    //절사 평균을 구하기 위해 가장 높은 점수와 가장 낮은 점수를 빼기 위해 구함
	float max = 0;
	float min = 11;
	float sub = 0;
	for(int i = 0; i < 5; i++) {
		if(row[i] > max) max = row[i];
        //만약 값이 max의 값보다 크가면 row값을 max에 저장함
		if(row[i] < min) min = row[i];
        //만약 값이 min의 값보다 작다면 row값을 min에 저장함
		sub += row[i];
        //평균을 구하기 위해 모든 값을 sub에 저장함
	}
	sub = (sub - (max + min)) / 3;
    //sub에서 최댓값과 최솟값을 뺀 값을 3으로 나눈 것을 sub에 저장한 후, 반환함
	return sub;
}