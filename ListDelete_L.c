#include "CreateList_L.c"
Status ListDelete_L(LinkList *L,int i,int *e,int *n)
{
	LinkList *p = L;
	int j = 0;
	while((*p)->next&&j<i-1)
	{
		(*p)=(*p)->next;
		++j;
	}
	if(!((*p)->next)||j>i-1)
		return ERROR;
	LinkList q=(*p)->next;
	(*p)->next=q->next;
	*e=q->data;
	free(q);
	*n=*n-1;
	return OK;
}
