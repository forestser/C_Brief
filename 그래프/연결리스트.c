#include <stdio.h>
#define MAX_VERTEX 30

typedef struct graphNode{
	int vertex;
	struct graphNode* link;
} graphNode;

typedef struct graphType{
	int n;
	graphNode* adjList_H[MAX_VERTEX];
} graphType;

void createGraph(graphType* g)
{
	int v;
	g -> n = 0;
	for(v = 0; v = MAX_VERTEX; v++) {
		g -> adjList_H[v] = NULL;
	}
}

void insertVertex(graphType* g, int v)
{
	if(((g->n)+1)>MAX_VERTEX){
		printf("\n 그래프 정점의 개수를 초과하였습니다!");
		return;
	}
	g->n++;
}

void insertEdge(graphType* g, int u, int v)
{
	graphNode* node;
	if(u>=g->n || v>=g->n) {
		printf("\n 그래프에 없는 정점입니다!");
		return;
	}
	node = (graphNode *)malloc(sizeof(graphNode));
	node -> vertex = v;
	node -> link = g -> adjList_H[v];
	g -> adjList_H[u] = node;
}

void print_adjList(graphType* g)
{
	int i;
	graphNode* p;
	for(i=0; i<g->n; i++){
		printf("\n\t\t정점 %C의 인접리스트", i+65);
		p = g -> adjList_H[i];
		while(p) {
			printf(" -> %c", p -> vertex + 65);
			p = p -> link;
		}
	}
}

int main()
{
	int i;
	graphType *G;
	G = (graphType *)malloc(sizeof(graphType));

	createGraph(G); 
	for(i=0; i<4; i++)
		insertVertex(G, i);
	insertEdge(G, 0, 1);
	insertEdge(G, 1, 3);
	insertEdge(G, 1, 2);
	insertEdge(G, 1, 0);
	insertEdge(G, 2, 3);
	insertEdge(G, 2, 1);
	insertEdge(G, 3, 2);
	insertEdge(G, 3, 1);
	
	printf("\n G의 인접 리스트");
	print_adjList(G);
		
  return 0;
} 