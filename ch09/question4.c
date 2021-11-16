
/* DBLAB treecreate.c */
#include <stdio.h>
#include <malloc.h>

struct tnode {
	int data;
	struct tnode* left_child;
	struct tnode* right_child;
};
typedef struct tnode node;
typedef node* tree_ptr;

tree_ptr insert(tree_ptr head, int* number)
{
	tree_ptr tnodes[9];
	tree_ptr temp = NULL;
	int i = 0;

	for (i = 0; i < 9; i++)
	{
		tnodes[i] = (tree_ptr)malloc(sizeof(node));
		tnodes[i]->data = number[i];
		tnodes[i]->left_child = tnodes[i]->right_child = NULL;
	}

	head = tnodes[0];
	tnodes[0]->left_child = tnodes[1];
	tnodes[0]->right_child = tnodes[2];

	tnodes[1]->left_child = tnodes[3];
	tnodes[1]->right_child = tnodes[4];
	tnodes[2]->right_child = tnodes[5];

	tnodes[4]->left_child = tnodes[6];
	tnodes[4]->right_child = tnodes[7]; 
	tnodes[5]->left_child = tnodes[8];



	return head;

}

void inorder(tree_ptr ptr)
{
	if (ptr)
	{
		inorder(ptr->left_child);
		printf("%d ", ptr->data);
		inorder(ptr->right_child);
	}
}

void preorder(tree_ptr ptr)
{
	if (ptr)
	{
		printf("%d ", ptr->data);
		preorder(ptr->left_child);
		preorder(ptr->right_child);
	}
}

void postorder(tree_ptr ptr)
{
	if (ptr)
	{
		postorder(ptr->left_child);
		postorder(ptr->right_child);
		printf("%d ", ptr->data);
	}
}

int treesum(tree_ptr ptr) { //중위탐색을 통한 트리 data의 합
	int sum = 0;
	if (ptr)
	{
		sum = treesum(ptr->left_child) + ptr->data + treesum(ptr->right_child);
	}
	return sum;
}

int treesnodecount(tree_ptr ptr) { // 중위탐색을 통한 노드의 count
	int count = 0;
	if (ptr)
	{
		count = treesnodecount(ptr->left_child) + 1 + treesnodecount(ptr->right_child);
	}
	return count;
}

int treedepth(tree_ptr ptr) { //중위탐색을 통한 트리 data의 합
	int depth = 0;
	if (ptr)
	{
		depth = max(treedepth(ptr->left_child), treedepth(ptr->right_child)) + 1;
	}
	return depth;
}

int max(int left, int right) {
	int depth = 0;
	if (left < right)
		return right;
	else
		return left;
}

int main()
{
	int i, number[9] = { 2, 7, 5, 2, 6, 9, 5, 11, 4 };
	tree_ptr head = NULL;
	/* 데이터5개 로 트리를 구성 */
	head = insert(head, number);

	inorder(head); //중위
	printf("\n");
	preorder(head); // 전위
	printf("\n");
	postorder(head); //후위
	printf("\n");
	int res = treesum(head);
	printf("트리의 합은 %d\n", res);

	int c = treesnodecount(head);
	printf("트리의 개수는 %d\n", c);

	int d = treedepth(head);
	printf("트리의 깊이는 %d\n", d);
}