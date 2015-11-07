#include "CreateList_L.c"
Status ListInsert_L(LinkList *L,int i,int e,int *n)
{
	LinkList *p = L;
	int j = 0;
	while(*p&&j<i-1)
	{
		*p=(*p)->next;
		++j;
	}
	if(!(*p)||j>i-1)
		return ERROR;
	LinkList s = (LinkList)malloc(sizeof(LNode));
	s->data=e;
	s->next=(*p)->next;
	(*p)->next=s;
	*n=*n+1;
	return OK;
}
