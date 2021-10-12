// 동적 배열 생성
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr, i;
    //포인터 변수, 그냥 변수 i
    ptr = (int *)malloc( sizeof(int)*5 ); // 20 예약 (int의 크기 4 * 5)
   //malloc은 얼마나 크든 가장 앞의 주소만 넣음 => ptr에는 가장 첫 부분 주소만 넣어짐
   //int* 는 넣으려는 포인터의 변수와 같이 해주면 됨
    for( i=0; i<5; i++ ) {
        ptr[i] = i*10;
        //ptr에는 0 부터 10, 20 ... 이 들어감
        printf("%8X => %d\n", &ptr[i], ptr[i]);
        //이 이후로는 배열 다루듯이 하면 됨
    }
    free(ptr);
   //이것을 안하면 쓸모없는 데이터 낭비가 일어나게 됨
    return 0;
}