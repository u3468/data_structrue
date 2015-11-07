#include "CreateBiTree.c"
void Visit(BiTree T)
{
	if(T->data != ' ')
	{
		printf("%c ",T->data);
	}
} 
void PreOrderTraverse(BiTree T)
{
	if(T != NULL)
	{
		Visit(T);
		PreOrderTraverse(T->lchild);
		PreOrderTraverse(T->rchild);
	}
}
