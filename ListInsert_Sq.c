#include "basic.c"
Status ListInsert_Sq(SqList *L,int i,int e)
{
	if (i < 1 || i > L->length+1)
	{
		return ERROR;
	}
	if (L->length >= L->listsize)
	{
		int *newbase = (int *)realloc(L->elem,(L->listsize+LISTINCREMENT)*sizeof(int));
		if(!newbase)
		{
			exit(OVERFLOW);
		}
		L -> elem = newbase;
		L -> listsize += LISTINCREMENT;
	}
	int *q = &(L -> elem[i-1]);
	int *p;
	for(p=&(L->elem[L->length-1]);p>=q;--p)
	{
		*(p+1) = *p;
	}
	*q = e;
	++L->length;
	return OK;
}
