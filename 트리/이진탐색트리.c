#include<stdio.h> 
#include<stdlib.h> 

typedef char element;
typedef struct treeNode {
		char key; 
		struct treeNode* left; 
		struct treeNode* right; 
} treeNode; 

treeNode* searchBST(treeNode* root, char x) 
{    
	treeNode* p;
	p = root;
    while (p != NULL)
    {
        if(p < NULL) p = p -> left;
        else if(x = p->key) return p;
        else p = p -> right;
    }
    printf("\n 찾는 키가 없습니다! \n");
	return p;
    //찾는 부분, 찾는 값이 노드 값보다 작으면 왼쪽, 크면 오른쪽으로 이동함 
} 

treeNode* insertNode(treeNode *p, element x) 
{ 
	treeNode *newNode;	
	if(p == NULL) {
        newNode = (treeNode *) malloc(sizeof(treeNode));
        newNode -> key = x;
        newNode -> left = NULL;
        newNode -> right = NULL;
        return newNode;
    }
	else if(x < p -> key) p -> left = insertNode(p -> left, x);
    else if(x > p -> key) p -> right = insertNode(p -> right, x);
    else printf("\n 이미 같은 키가 있습니다! \n");
	return p;	 
} 

void deleteNode(treeNode *root, element key ) {
	treeNode *parent, *p, *succ, *succ_parent;
	treeNode *child;
	
	parent = NULL;
	p = root;
	while( (p!=NULL) &&(p->key !=key)){
		parent = p;
		if( key < p->key ) p = p->left;
		else p = p->right;
	}
	
	if( p == NULL ){
		printf("\n 찾는 키가 이진 트리에 없습니다!!");
		return;
        //삭제할 노드가 없는 경우
	}
	
	if( (p->left == NULL ) && (p->right == NULL ) ){
        if(parent != NULL) {
            if(parent -> left = p) parent-> left = NULL;
            else parent -> right = NULL;
        }
		else root = NULL;
        //삭제할 노드가 단말 노드(자식이 없는) 경우
	}
	
	if( (p->left == NULL ) || (p->right == NULL) ){
		if(p -> left != NULL) child = p -> left;
        else child = p -> right;

        if(parent != NULL) {
            if(parent -> left == p) parent -> left = child;
            else parent -> right = child;
        }
		else root = child;
        //삭제할 노드가 자식 노드를 하나만 가질 경우
	}
	else{
		succ_parent = p;
        succ = p -> left;
        while (succ -> right != NULL)
        {
            succ_parent = succ;
            succ = succ -> right;
        }
        if(succ_parent -> left = succ) succ_parent -> left = succ -> left;
        else succ_parent -> right = succ -> left;
        p -> key = succ -> key;
		p = succ;
		//삭제할 노드가 자식 노드를 둘 다 가질 경우(이진트리니깐 2개가 최대임)
	}
	free(p);
		
}
void displayInorder(treeNode* root)
{
	if(root){		
		displayInorder(root->left);
		printf("%c_", root->key);
		displayInorder(root->right);
	}
}

void menu(){
	printf("\n*-----------------------*\n");
	printf("\n\t1 : 트리 출력\n");
	printf("\n\t2 : 문자 삽입\n");
	printf("\n\t3 : 문자 삭제\n");
	printf("\n\t4 : 문자 검색\n");
	printf("\n\t5 : 종료\n");
	printf("\n*-----------------------*\n");
	printf("\n메뉴 입력 >> ");

}
int main() 
{	 
	treeNode* root = NULL;	  
	treeNode* foundedNode = NULL; 
	char choice, key;	       

	root = insertNode(root,'G');
	insertNode(root,'I');
	insertNode(root,'H');
	insertNode(root,'D');
	insertNode(root,'B');
	insertNode(root,'M');
	insertNode(root,'N');
	insertNode(root,'A');
	insertNode(root,'J');
	insertNode(root,'E');
	insertNode(root,'Q');
	
	while( 1 ){
		menu();
		scanf(" %c", &choice);
		switch( choice - '0'){
			case 1 : printf("\t[이진 트리 출력] ");
				displayInorder(root); printf("\n");
				break;
			case 2 : printf("삽입할 문자를 입력하세요 : ");
				scanf(" %c", &key);
				insertNode( root, key );
				break;
			case 3 : printf("삭제할 문자를 입력하세요 : ");
				scanf(" %c", &key);
				deleteNode( root, key );
				break;
			case 4 : printf("찾을 문자를 입력하세요 : ");
				scanf(" %c", &key);
				foundedNode =searchBST( root, key );
				if(foundedNode != NULL)
					printf("\n %c를 찾았습니다! \n", foundedNode->key);
				else printf("\n 문자를 찾지 못했습니다. \n");
				break;
			case 5 : return 0;
			default : printf("없는 메뉴입니다. 메뉴를 다시 선택하세요!\n");
				break;
		}
	}
} 
