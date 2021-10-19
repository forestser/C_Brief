#include <stdio.h>
void inputArray( int a[][4], int row );
int totArray( int *a, int size);

int main(){
  int score[3][4];
  int i, j;
  int tot;
  double avg;
  
  printf("학생 3명, 각각 네 과목의 점수를 입력하세요\n");
  //학생 한명당 4과목 점수를 입력하여 총 12개 입력
  inputArray( score, 3);
  
  for( i = 0 ; i < 3 ; i ++ ){
    tot = totArray( score[i], 4 );
    avg = tot / 4. ;
    printf("총점 : %.d, 평균 : %.2lf\n", tot, avg);
  }
  return 0;
}
void inputArray( int a[][4], int row ){
  int i, j;
  for( i = 0 ; i < row; i ++ )
  //row는 3으로 입력받음(위에 inputArray에서)
    for( j = 0 ; j < 4; j ++ )
      scanf("%d", &a[i][j]);
      //학생의 성적을 넣는 코드
      /*
      보면 가로 4 * 세로 3의 이차원 배열이 있는데,
      그 때 성적을 [0][0]에서부터 [0][3]까지 넣음
      그 다음 학생은 [1][0]부터 [1][3]까지 넣음
      그렇다면 한 학생의 4과목 성적은 한 행(가로)에 전부 다 들어감
      */
}
int totArray( int *a, int size){
  int i, tot=0;
  for( i = 0 ; i < size ; i ++ )
  //size 값은 위에서 선언해줌(4라고)
    tot += a[i];
    //위에 한 행(가로)에 넣은 과목의 총 합을 tot에 넣고, 그 값을 반환함
  return tot;
}