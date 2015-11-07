#include "basic.c"
Status ListDelete_Sq(SqList *L,int i,int *e)
{
	if(i<1||i>L->length)
	{
		return ERROR;
	}
	int *p = &(L->elem[i-1]);
	*e = *p;
	int *q = L->elem+L->length-1;
	for(++p;p<=q;++p)
	{
		*(p-1)=*p;
	}
	--L->length;
	return OK;
}
