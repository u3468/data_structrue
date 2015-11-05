#include "basic.c"
Status CreateBiTree(BiTree *T)
{
	int i;
	scanf("%d",&i);
	if(i == 0)
		T = NULL;
	else
	{
		if(!(*T = (BiTNode *)malloc(sizeof(BiTNode))))
			exit(OVERFLOW);
		(*T)->data = i;
		CreateBiTree(&((*T)->lchild));
		CreateBiTree(&((*T)->rchild)); 
	}
	return OK;
}
