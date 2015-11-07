#include "basic.c"
void Visit(BiTree T)
{
	if(T->data != ' ')
	{
		printf("%c ",T->data);
	}
} 
Status PreOrderTraverse(BiTree T)
{
	if(T != NULL)
	{
		Visit(T);
		PreOrderTraverse(T->lchild);
		PreOrderTraverse(T->rchild);
		return OK;
	}
	return ERROR;
}
