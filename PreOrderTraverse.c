#include "CreateBiTree.c"
Status PreOrderTraverse(BiTree T)
{
	if(T != NULL)
	{
		if(T->data != ' ')
		{
			printf("%c",T->data);
			if(PreOrderTraverse(T->lchild))
				if(PreOrderTraverse(T->rchild))
					return OK;
		}
		return ERROR;	
	}
	else
		return OK;
}
