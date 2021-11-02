// 원형 큐
#include <stdio.h>
#include <stdlib.h>
typedef int ELEMENT ;
typedef struct queue{
	ELEMENT * buf;
	int front;
	int rear;
	int size;
}QUEUE;
QUEUE * createQueue( int n );
int isFull( QUEUE *q );
void enQueue( QUEUE *q, ELEMENT data );
int isEmpty( QUEUE *q );
ELEMENT deQueue( QUEUE *q );
void destroyQueue( QUEUE * q );
void printAll( QUEUE *q );
int main() {
	QUEUE *q;
	ELEMENT data;
	int menu = 1;
	q = createQueue( 5 );
	
	while( menu ){
		printf("1:enQueue, 2:deQueue, 3:printAll... ");
		scanf("%d", &menu);
		switch (menu) {
			case 1 : scanf("%d", &data);
				enQueue( q, data );
				break;
			case 2 : data = deQueue( q );
				if(data )printf("%d\n", data);
				break;
			case 3 : printAll(q);
				break;
			default : menu = 0; break;
		}
	}
	
	destroyQueue( q );
	return 0;
}
QUEUE * createQueue( int n ){
	QUEUE *temp = (QUEUE *) malloc( sizeof(QUEUE) );
	temp -> size = n+1;   // 한 칸을 비워 놓기 위함
	temp -> rear = 0;
	temp -> front = 0;
	temp -> buf = (ELEMENT *)malloc(sizeof(ELEMENT)*temp->size);
	return temp;
}
int isFull( QUEUE *q ){
	// 원형 큐가 가득차 있을 때, rear와 front의 상태는?
	if((q -> rear+1)%q->size == q -> front%q->size){
		return 1;
	}else{
		return 0;
	}
}
void enQueue( QUEUE *q, ELEMENT data ){
	if( isFull( q ) ) printf("Queue is full\n");
	else {
		// 원형 큐에서 rear 값은?
		q->rear++;
		q->rear = q->rear % q->size;
		q->buf[ q->rear ] = data;
	}
}
int isEmpty( QUEUE *q ){
		// 원형 큐가 비어 있을 때, rear와 front의 상태는?
	if(q -> rear == q -> front){
		return 1;
	}else{
		return 0;
	}
}
ELEMENT deQueue( QUEUE *q ){
	if( isEmpty( q ) ){
		printf("Queue is empty\n");
		return 0;
	}
	// 원형 큐에서 front 값은?
	q->front++;
	q->front = q->front % q->size;
	return q->buf[ q->front ];
}
void destroyQueue( QUEUE * q ){
	free( q->buf );
	free( q );
}
void printAll( QUEUE *q ){
	int i;
	if( isEmpty(q)) return;
	for(i=q->front+1; i!=q->rear+1; i++ % q->size){
		printf("%d ", q->buf[i]);
	}
	// 원형 큐에서 시작과 끝은 어떻게??
	
	printf("\n");
}