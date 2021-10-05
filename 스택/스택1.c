#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 10

typedef int ELEMENT;
typedef struct Stack{
	ELEMENT buf[STACK_SIZE];
	int top;
}STACK;
// typedef로 선언을 좀 더 편하게 함

void createStack( STACK *s );
int isFull( STACK *s );
int isEmpty( STACK *s );
void Push( STACK *s, ELEMENT data );
ELEMENT Pop( STACK *s );

int main(){
	int menu;
	ELEMENT data ;
	STACK stack;
	
	createStack( &stack );
	do{
        //스택을 사용하기 위한 코드(구현)
		printf("1:push, 2:pop, 0:exit : ");
		scanf("%d", &menu);
		switch( menu ){
			case 1 :
            //1을 입력받으면 Push를 함
				printf("데이터 입력 : ");
				scanf("%d", &data);
				Push( &stack, data );
				break;
			case 2 :
            // 2를 입력받으면 Pop을 함
        data = Pop(&stack);
        if( data )
				  printf("pop 데이터 : %d\n", data);
				break;
      case 0 :
      // 0을 입력받으면 빠져나와서 끝남
        break;
			default :
            // 그 외 다른 수를 입력받으면 잘못된 입력이라고 출력함
				printf("잘못된 입력 입니다. \n");
				break;
		}
	}while( menu );
}

void createStack( STACK *s ){  // top 포인터를 -1로 초기화
	s->top = -1;
}
int isFull( STACK *s ){   // 스택이 가득 차 있으면 true 리턴
	return (s->top+1) == STACK_SIZE;
	
}
int isEmpty( STACK *s ){   // 스택이 비어 있으면 true 리턴
	return s->top == -1;
	
}
void Push( STACK *s, ELEMENT data ){ //스택이 가득 차 있으면 문구 출력 후 리턴, 아니면 push
	if(isFull(s)) {
		printf("stack is full\n");
		return;
	}
	s->buf[++(s->top)] = data;
    //data의 값이 buf의 최상값 1칸 위(가장 높은곳)에 저장됨
}
ELEMENT Pop( STACK *s ){  //스택이 비어  있으면 문구 출력 후 0 리턴, 아니면 맨 위 데이터 리턴
	if(isEmpty(s)) {
		printf("stack is empty\n");
		return 0;	
	}
	else {
		return s->buf[(s -> top)--];
        //가장 최상위 값을 반환한 다음 1을 내림(최상값을 1 낮춤)
	}
}