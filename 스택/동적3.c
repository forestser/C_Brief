// 함수를 활용해 node 동적으로 생성하기
#include<stdio.h>
#include<stdlib.h>
typedef int ELEMENT;
typedef struct node{
    ELEMENT data;
    struct node *next;
}NODE;
NODE *createNode( ELEMENT data );
//원소를 주면, Node를 하나 만들고, 그 node의 주소를 반환함

int main() {
    NODE *head;
    NODE *body;
	NODE *end;
	
        head = createNode( 12 );
		body = createNode( 99 );
		end = createNode( 37 );
	
		head->next = body;
		body->next = end;
	
    /*
    head = createNode( 12 );
    body = createNode( 99 );
    head->next = body;
    body = createNode( 37 );
    head->next->next = body;

    라는 또다른 방법으로도 가능함.
    */
    printAll( head );      
}

NODE *createNode( ELEMENT data ){
    NODE *new = (NODE *)malloc( sizeof(NODE) );
    //8byte짜리 무언가를 가지게 됨
    new->data = data;
    new->next = NULL;
    //new의 data에 10, next에 NULL을 넣음
    return new;
}
void printAll( NODE *ptr ){
    while( ptr ){
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}
