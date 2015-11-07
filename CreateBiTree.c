#include "basic.c"
Status CreateBiTree(BiTree *T)
{
	char ch;
	scanf("%c",&ch);
	if(ch == ' ')
		*T = NULL;
	else
	{
		if(!(*T = (BiTNode *)malloc(sizeof(BiTNode))))
			exit(OVERFLOW);
		(*T)->data = ch;
		CreateBiTree(&((*T)->lchild));
		CreateBiTree(&((*T)->rchild)); 
	}
	return OK;
}
