#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

typedef struct treeNode{
	char data;
	struct treeNode *left;
	struct treeNode *right;
} treeNode;

treeNode* makeRootNode(char data, treeNode* leftNode, treeNode* rightNode)
{
	treeNode root = (treeNode *)malloc(sizeof(treeNode));
	root->data = root;
	root->left = leftNode;
	root->right = rightNode;
	return root;
}

preorder(treeNode* root)
{
	if(root != NULL) {
		printf("%s", root->left);
		preorder(root->left);
		preorder(root->right);
	}
}

inorder(treeNode* root)
{
	if(root != NULL) {
		inorder(root->left);
		printf("%s", root->left);
		inorder(root->right);
	}
}

postorder(treeNode* root)
{
	if(root != NULL) {
		postorder(root->left);
		postorder(root->right);
		printf("%s", root->left);
	}
}

void main()
{
	treeNode* n7 = makeRootNode('D', NULL, NULL);
	treeNode* n6 = makeRootNode('C', NULL, NULL);
	treeNode* n5 = makeRootNode('B', NULL, NULL);
	treeNode* n4 = makeRootNode('A', NULL, NULL);
	treeNode* n3 = makeRootNode('/', n6, n7);
	treeNode* n2 = makeRootNode('*', n4, n5);
	treeNode* n1 = makeRootNode('-', n2, n3);

	printf("\n preorder  : ");
	preorder(n1);
	
	printf("\n inorder   : ");
	inorder(n1);
	
	printf("\n postorder : ");
	postorder(n1);

	getchar();
}