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
	ELEMENT data, result;
    int n;
    scanf("%d", &n);
	createQueue(n);
    for(int i = 0; i < n; i++) {
        enQueue(q, i);
    }
	for(int j = 0; j = n - 1; j++) {
        deQueue(q);
        enQueue(q, deQueue(q));
    }
	printAll(q);
	destroyQueue( q );
	return 0;
}
QUEUE * createQueue( int n ){
	QUEUE *temp = (QUEUE *) malloc( sizeof(QUEUE) );
	temp -> size = n+1;
	temp -> rear = 0;
	temp -> front = 0;
	temp -> buf = (ELEMENT *)malloc(sizeof(ELEMENT)*temp->size);
	return temp;
}
int isFull( QUEUE *q ){
	return (q->rear + 1) % q->size == q->front ;
}
void enQueue( QUEUE *q, ELEMENT data ){
	if( isFull( q ) ) printf("Queue is full\n");
	else {
		q -> rear = ( q->rear + 1 ) % q->size;
		q->buf[ q->rear ] = data;
	}
}
int isEmpty( QUEUE *q ){
	return q->rear == q->front;
}
ELEMENT deQueue( QUEUE *q ){
	if( isEmpty( q ) ){
		printf("Queue is empty");
		return 0;
	}
	q->front = ( q->front + 1 ) % q->size ;
	return q->buf[ q->front ];
}
void destroyQueue( QUEUE * q ){
	free( q->buf );
	free( q );
}

void printAll( QUEUE *q ){
	int i;
	int end = (q->front < q->rear)? q->rear : q->rear + q->size;
	if( isEmpty(q)) return;
	for( i = q->front+1 ; i <= end ; i++ ){
		printf("%d ", q->buf[i%(q->size)] );	
	} 
	printf("\n");
}