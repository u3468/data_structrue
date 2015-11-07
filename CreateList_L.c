#include "Basic.c"
void CreateList_L(LinkList *L,int n)
{
	int i;
	*L = (LinkList)malloc(sizeof(LNode));
	(*L)->next=NULL;
	for(i = n;i > 0;--i)
	{
		LinkList p = (LinkList)malloc(sizeof(LNode));
		printf("请输入第%d个数据：",i);
		scanf("%d",&p->data);
		p->next = (*L)->next;
		(*L)->next = p;
	}
}
