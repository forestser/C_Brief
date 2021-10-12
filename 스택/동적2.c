// 동적으로 구조체 생성하기
#include<stdio.h>
#include<stdlib.h>
typedef int ELEMENT;
typedef struct node{ 
    ELEMENT data;
    //int형으로 data를 가지고 있음
    struct node *next;
    //포인터 변수 next를 가지고 있음
    //그렇다면 node는 8byte을 가지고 있을 것임
}NODE;

int main(){
    NODE *n1;
    NODE *n2;
    NODE *ptr;
    //
    n1 = (NODE *)malloc( sizeof(NODE) );
    //누군가 8byte 짜리 node를 하나 만들고, 그것을 n1에 저장함
    n2 = (NODE *)malloc( sizeof(NODE) );
    //누군가 8byte 짜리 node를 하나 만들고, 그것을 n2에 저장함
    n1->data = 10;
    //n1 안에 있는 data(첫칸)에 10을 넣어라
    n1->next = n2;
    //n1의 next에 n2를 저장함 -> n1의 next는 n2를 가리키게 됨
    n2->data = 20;
    //n2의 데이터에 20을 넣어둠
    n2->next = NULL;
    //NULL 포인터(0이 나오긴 함)를 n2의 next에 넣어줌
    // 이제 아무것도 가리키지 않음
    ptr = n1;
    while( ptr ){
        printf("%d\n", ptr->data);
        //처음 ptr의 데이터(n1의 data)를 출력함(10이 나오게 될 것)
        ptr = ptr->next;
        // 그 다음 ptr의 next를 저장함(그렇다면 n2를 저장하게 될 것)
        // 그 다음 출력하면 20이 나오게 될 것이다.

        //마지막으로, n2의 next인 NULL을 받으면 ptr이 false가 되어 while문이 끝나게 됨.
    }
}