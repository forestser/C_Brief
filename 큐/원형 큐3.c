#include <stdio.h>
#include <malloc.h>

typedef char element; 
typedef struct QNode{
	element data;
	struct QNode *link;
} QNode;

typedef struct{	
	QNode *front, *rear;
} LQueueType;

LQueueType *createLinkedQueue()
{
	LQueueType *LQ;
	LQ =  (LQueueType *)malloc(sizeof(LQueueType));          // 동적으로 큐 생성
	LQ->front= NULL;          // 초기 값은?
	LQ->rear= NULL;          // 초기 값은?
	return LQ;
}

int isEmpty(LQueueType *LQ) 
{ 
	if (LQ->front == NULL) {                  // 큐가 비어있다면 front는??
		printf("\n Linked Queue is empty! \n");
		return 1;	 
	}
	 else return 0; 
} 

void enQueue(LQueueType *LQ, element item) 
{ 
	 QNode *newNode=(QNode *)malloc(sizeof(QNode));
	 newNode->data = item;
	 newNode->link = NULL;
	 if(LQ->front == NULL) {    // 비어 있는 큐라면
		 LQ->front = newNode;
		 LQ->rear = newNode;	
	 }
	 else {                      // 비어 있는 큐가 아니라면
		LQ->rear->link = newNode;
		LQ->rear = newNode;
	 }
}

element deQueue(LQueueType *LQ) 
{ 
	QNode *old = LQ->front;
	element item;
	 if (isEmpty(LQ)) return 0;   // 비어있다면
	 else {                       // 비어 있지 않다면
		 item = old -> data;
         LQ -> front = LQ -> front -> link;
         if(LQ -> front == NULL) {
             LQ -> rear = NULL;
         }
         free(old);
		 return item;
	 }
} 

element peek(LQueueType *LQ) 
{ 
	 element item;
	 if (isEmpty(LQ)) return 0; 
	 else {
		 item = LQ->front->data;
		 return item;
	 }
}

void printLQ(LQueueType *LQ)
{
	QNode *temp = LQ->front;
	printf("\n Linked Queue : [");
	while(temp) {
		printf("%3c", temp->data);
		temp = temp->link;
	}
	printf(" ]");
}

int main(void) 
{ 
	LQueueType *LQ1 = createLinkedQueue(); 
	element data; 
	enQueue(LQ1, 'A'); 	printLQ(LQ1);
	enQueue(LQ1, 'B');  	printLQ(LQ1);
	deQueue(LQ1);		printLQ(LQ1);
	enQueue(LQ1, 'C');	printLQ(LQ1);
	data = peek(LQ1);	printf("\n peek item : %c", data);
	deQueue(LQ1);		printLQ(LQ1);
	deQueue(LQ1);		printLQ(LQ1);

	getchar();
	return 0; 
} 